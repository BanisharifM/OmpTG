import sys
import os
sys.path.insert(0, 'src/EFGenerate')

if len(sys.argv) < 4:
    print("Usage: python run_efg_fixed.py <dot_file> <wct_file> <relation_file> [function_name]")
    sys.exit(1)

import graph as efg
from PreprocessDot import preprocess
import networkx as nx
import pydot

# Set paths from arguments
efg.dotPath = sys.argv[1]
efg.wctPath = sys.argv[2]
efg.relationPath = sys.argv[3]
efg.parseFunction = sys.argv[4] if len(sys.argv) > 4 else 'main'

output_dir = os.path.dirname(sys.argv[1])
efg.EFGDir = os.path.join(output_dir, 'EFG/')
os.makedirs(efg.EFGDir, exist_ok=True)

try:
    print("Processing Relation table...")
    relation = efg.parseRelation(efg.relationPath)
    
    print("Preprocessing CFG...")
    preprocess(efg.dotPath)
    
    print("Processing CFG graph...")
    # Read the preprocessed file directly with pydot to avoid NetworkX issue
    pd_file = efg.dotPath + '_pd'
    if os.path.exists(pd_file):
        graphs = pydot.graph_from_dot_file(pd_file)
        if graphs:
            # Convert to NetworkX graph manually
            EFG = nx.DiGraph()
            for edge in graphs[0].get_edges():
                EFG.add_edge(edge.get_source(), edge.get_destination())
            
            efg.parse(efg.parseFunction, EFG, relation)
            print("Extracting EFG graph...")
            efg.graphEFG(EFG, relation)
            print("EFG generation complete!")
except Exception as e:
    print(f"Error: {e}")

print(f"Output in: {efg.EFGDir}")

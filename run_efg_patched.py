import sys
import os
sys.path.insert(0, 'src/EFGenerate')

# Patch for NetworkX compatibility
import networkx as nx
if hasattr(nx.Graph, 'node'):
    # Old version, no patch needed
    import graph as efg
else:
    # New version, use patched file
    import graph_fixed as efg

from PreprocessDot import preprocess

if len(sys.argv) < 4:
    print("Usage: python run_efg_patched.py <dot_file> <wct_file> <relation_file> [function_name]")
    sys.exit(1)

efg.dotPath = sys.argv[1]
efg.wctPath = sys.argv[2]
efg.relationPath = sys.argv[3]
efg.parseFunction = sys.argv[4] if len(sys.argv) > 4 else 'main'

output_dir = os.path.dirname(sys.argv[1])
efg.EFGDir = os.path.join(output_dir, 'EFG/')
os.makedirs(efg.EFGDir, exist_ok=True)

try:
    print("Processing EFG generation...")
    relation = efg.parseRelation(efg.relationPath)
    preprocess(efg.dotPath)
    
    pd_file = efg.dotPath + '_pd'
    if os.path.exists(pd_file):
        EFG = nx.nx_pydot.read_dot(pd_file)
        efg.parse(efg.parseFunction, EFG, relation)
        efg.graphEFG(EFG, relation)
        print("EFG generation complete!")
except Exception as e:
    print(f"Error: {e}")

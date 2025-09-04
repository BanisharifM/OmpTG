import sys
import os
sys.path.insert(0, 'src/EFGenerate')

if len(sys.argv) < 4:
    print("Usage: python run_efg_complete.py <dot_file> <wct_file> <relation_file> [function_name]")
    sys.exit(1)

# Import the EFG modules
import graph as efg
from PreprocessDot import preprocess
import networkx as nx

# Set the paths from command line arguments
efg.dotPath = sys.argv[1]
efg.wctPath = sys.argv[2]
efg.relationPath = sys.argv[3]

# Set function name if provided
if len(sys.argv) > 4:
    efg.parseFunction = sys.argv[4]
else:
    efg.parseFunction = 'main'

# Set output directory
output_dir = os.path.dirname(sys.argv[1])
efg.EFGDir = os.path.join(output_dir, 'EFG/')
efg.root = output_dir + '/'

# Create EFG directory if it doesn't exist
os.makedirs(efg.EFGDir, exist_ok=True)

print("Processing EFG Generation...")
print(f"  DOT: {efg.dotPath}")
print(f"  WCT: {efg.wctPath}")
print(f"  Relations: {efg.relationPath}")
print(f"  Function: {efg.parseFunction}")

try:
    # Follow the main execution logic from graph.py
    print("Processing Relation table...")
    relation = efg.parseRelation(efg.relationPath)
    
    print("Preprocessing CFG...")
    preprocess(efg.dotPath)
    
    print("Getting graph Cluster definition...")
    if os.path.exists(efg.dotPath + '_dec'):
        Definition = open(efg.dotPath + '_dec').read()
        os.remove(efg.dotPath + '_dec')
    
    print("Processing CFG graph...")
    if os.path.exists(efg.dotPath + '_pd'):
        EFG = nx.nx_pydot.read_dot(efg.dotPath + '_pd')
        os.remove(efg.dotPath + '_pd')
        
        efg.parse(efg.parseFunction, EFG, relation)
        
        print("Extracting EFG graph...")
        efg.graphEFG(EFG, relation)
        print("Extraction complete!")
    else:
        print("Error: Preprocessed DOT file not found")
        
except Exception as e:
    print(f"Error during EFG generation: {e}")
    import traceback
    traceback.print_exc()

print(f"Check output in: {efg.EFGDir}")

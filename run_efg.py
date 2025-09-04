import sys
import os
sys.path.insert(0, 'src/EFGenerate')

if len(sys.argv) < 4:
    print("Usage: python run_efg.py <dot_file> <wct_file> <relation_file> [function_name]")
    sys.exit(1)

# Import the EFG module
import graph as efg

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

print(f"Generating EFG:")
print(f"  DOT: {efg.dotPath}")
print(f"  WCT: {efg.wctPath}")
print(f"  Relations: {efg.relationPath}")
print(f"  Output: {efg.EFGDir}")

# Run the main EFG generation logic
# Note: The actual processing functions need to be called here
# This depends on what functions are available in the graph module

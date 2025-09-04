import sys
import re

if len(sys.argv) != 4:
    print("Usage: python add_wcet_to_dot.py <input.dot> <input.wct> <output.dot>")
    sys.exit(1)

# Read WCET values
wcet_data = {}
with open(sys.argv[2], 'r') as f:
    for line in f:
        parts = line.strip().split()
        if len(parts) == 3:
            func, block, time = parts
            # Format: main bb_9 -> main__bb__9
            key = f"{func}__{block.replace('_', '__')}"
            wcet_data[key] = time

# Read and modify DOT file
with open(sys.argv[1], 'r') as f:
    dot_content = f.readlines()

# Add WCET to labels
output = []
for line in dot_content:
    if '[label=' in line:
        # Extract node name and label
        match = re.search(r'"([^"]+)"\[label="([^"]+)"', line)
        if match:
            node_name = match.group(1)
            label = match.group(2)
            
            # Look for WCET value
            wcet = None
            for key, value in wcet_data.items():
                if key in label or label in key:
                    wcet = value
                    break
            
            # Add WCET to label if found
            if wcet:
                new_label = f"{label}\\nWCET: {wcet}"
                line = line.replace(f'label="{label}"', f'label="{new_label}"')
    
    output.append(line)

# Write output
with open(sys.argv[3], 'w') as f:
    f.writelines(output)

print(f"Created {sys.argv[3]} with WCET annotations")

#!/usr/bin/env python3
import sys
import subprocess
import re

def process_ompi(input_file):
    base = input_file.replace('.c', '')
    
    # Step 1: Preprocess but keep only user code, not system headers
    cmd = f"gcc -E -fopenmp {input_file} | grep -v '^#' > {base}_ompi_temp.c"
    subprocess.run(cmd, shell=True, stderr=subprocess.DEVNULL)
    
    # Step 2: Clean up the file
    with open(f"{base}_ompi_temp.c", 'r') as f:
        lines = f.readlines()
    
    # Filter out system declarations and keep only actual code
    filtered_lines = []
    in_user_code = False
    
    for line in lines:
        # Skip empty lines at the beginning
        if not filtered_lines and not line.strip():
            continue
        # Skip typedef declarations from system headers
        if line.strip().startswith('typedef struct') or line.strip().startswith('extern'):
            continue
        # Keep the actual user code
        if 'int main' in line or in_user_code:
            in_user_code = True
            filtered_lines.append(line)
    
    # Write cleaned version
    with open(f"{base}_ompi_trim.c", 'w') as out:
        out.writelines(filtered_lines)
    
    print(f"Generated: {base}_ompi_trim.c")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <input.c>")
        sys.exit(1)
    process_ompi(sys.argv[1])

#!/usr/bin/env python3
import sys
import subprocess
import re

def process_ompi(input_file):
    base = input_file.replace('.c', '')
    
    # Step 1: Preprocess with gcc
    cmd = f"gcc -E -P -fopenmp {input_file} -o {base}_ompi_temp.c"
    subprocess.run(cmd, shell=True, stderr=subprocess.DEVNULL)
    
    # Step 2: Format with line numbers like the examples
    with open(f"{base}_ompi_temp.c", 'r') as f:
        lines = f.readlines()
    
    with open(f"{base}_ompi.c", 'w') as out:
        for i, line in enumerate(lines, 1):
            if 'typedef' in line:
                out.write(f"/* (l{i}) {line.strip()} */\n# {i} \n")
            else:
                out.write(line)
    
    # Step 3: Create trimmed version
    with open(f"{base}_ompi.c", 'r') as f:
        content = f.read()
    
    # Remove excessive blank lines and system declarations
    trimmed = re.sub(r'\n\s*\n+', '\n\n', content)
    
    with open(f"{base}_ompi_trim.c", 'w') as out:
        out.write(trimmed)
    
    print(f"Generated: {base}_ompi.c and {base}_ompi_trim.c")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <input.c>")
        sys.exit(1)
    process_ompi(sys.argv[1])

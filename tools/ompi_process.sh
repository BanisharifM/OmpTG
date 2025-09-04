#!/bin/bash

if [ $# -lt 1 ]; then
    echo "Usage: $0 <input.c> [include_dir]"
    exit 1
fi

INPUT=$1
INCLUDE_DIR=${2:-.}
BASE=$(basename $1 .c)

# Step 1: Preprocess with OpenMP support
gcc -E -P -fopenmp -I${INCLUDE_DIR} $INPUT -o ${BASE}_ompi.c 2>/dev/null || \
gcc -E -P -I${INCLUDE_DIR} $INPUT -o ${BASE}_ompi.c

# Step 2: Trim - remove excessive typedefs and system declarations
cat ${BASE}_ompi.c | \
    awk '!/#include/ && !/^typedef.*__[a-z]/ && !/^extern/ || /^typedef.*omp/' | \
    sed 's/^[ \t]*//;s/[ \t]*$//' | \
    awk 'NF' > ${BASE}_ompi_trim.c

echo "Generated: ${BASE}_ompi.c ($(wc -l < ${BASE}_ompi.c) lines)"
echo "Generated: ${BASE}_ompi_trim.c ($(wc -l < ${BASE}_ompi_trim.c) lines)"

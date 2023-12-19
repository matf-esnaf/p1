#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file
for c_file in $c_files; do
    # Extract the file name without the extension
    filename=$(basename -- "$c_file")
    filename_noext="${filename%.*}"

    # Compile the C file and create an executable with the same name
    gcc -o "$filename_noext" "$c_file"

    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compiled: $c_file -> $filename_noext"
    else
        echo "Failed to compile: $c_file"
    fi
done


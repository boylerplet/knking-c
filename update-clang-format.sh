#!/bin/bash

# The path to the template .clang-format file
template_file="./.clang-format"

# Check if the template file exists
if [ ! -f "$template_file" ]; then
    echo "Template .clang-format file not found!"
    exit 1
fi

# Find all .clang-format files in the nested directory and replace them
find . -type f -name ".clang-format" | while read file; do
    cp "$template_file" "$file"
    echo "Replaced $file with the template"
done

echo "All .clang-format files have been replaced."

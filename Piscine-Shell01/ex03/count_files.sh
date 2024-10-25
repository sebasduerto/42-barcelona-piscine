find . -type d -printf '%p/\n' -o -type f -printf '%p\n' | wc -l


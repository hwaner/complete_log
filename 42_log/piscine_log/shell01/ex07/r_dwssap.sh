#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | awk -v A=$FT_LINE1 -v Z=$FT_LINE2 'NR==A,NR==Z' | tr '\n' ',' | sed -e 's/,/, /g' -e 's/, $/./' | tr -d '\n'

#!/bin/bash
if cmp $1; then
    for i in $1.in*; do
        echo $i
        ./$1 < $i
    done
fi

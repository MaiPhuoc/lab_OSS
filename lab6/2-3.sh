#!/bin/bash
gcc 2-3.c -o 2-3 && (./2-3)
pstree | grep 2-3

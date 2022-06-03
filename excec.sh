#!/bin/zsh
read -p "file name? > " file_name
echo creating exection file and executing...
gcc $file_name
clear
./a.out
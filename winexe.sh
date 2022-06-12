#!/bin/bash

clear
echo -n "file name > "
for i in $@; do
    echo -n "$i "
done
echo ""
echo -n "compile - "

# ファイルが存在しない場合、処理を中止
for i in $@; do
    if ! [ -e $i ]; then
        echo "\e[31mERROR\e[m: file \"$i\" is not exist."
        exit;
    fi
done

# コンパイル実行
result=`gcc $* 2>&1 >/dev/null`

# コンパイルエラーが発生した場合、処理を中止
for i in $@; do
    if [ $result ]; then
        echo "\e[31mERROR\e[m: compile error at \"$i\"."
        echo $result;
        exit;
    fi
done

# エラーが発生していなかった場合、実行ファイルを実行
echo -e "\e[32mOK\e[m"
./a.exe
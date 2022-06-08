#!/bin/zsh

clear
echo "file name > $1"
echo -n "compile - "

# ファイルが存在しない場合、処理を中止
if ! [ -e $1 ]; then
    echo "\e[31mERROR\e[m: file not exist."
    exit;
fi

# コンパイル実行
result=`gcc $1 2>&1 >/dev/null`

# コンパイルエラーが発生した場合、処理を中止
if [ $result ]; then
    echo "\e[31mERROR\e[m: compile error."
    echo $result;
    exit;
fi

# エラーが発生していなかった場合、実行ファイルを実行
echo -e "\e[32mOK\e[m"
./a.out
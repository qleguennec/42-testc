#! /bin/bash

CURRENT_SHELL=$(echo $SHELL | cut -d/ -f3)

mkdir -p .bin
cp script/testc .bin/
echo 'PATH=$PATH:~/.bin' >> ~/."$CURRENT_SHELL"rc
export PATH=$PATH:~/.bin

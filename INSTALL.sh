#! /bin/bash

CURRENT_SHELL=$(echo $SHELL | cut -d/ -f3)

mkdir -p ~/.bin
cp ~/42-testc/script/testc ~/.bin/
echo 'PATH=$PATH:~/.bin' >> ~/."$CURRENT_SHELL"rc
echo "Install complete. Now reload your shell using 'zsh' or 'bash'"

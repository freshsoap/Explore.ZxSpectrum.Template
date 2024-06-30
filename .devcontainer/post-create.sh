#!/bin/bash

echo "Setup sjasmplus for the container"

unzip ~/../../workspaces/*/tools/sjasmplus.1.18.3.zip -d ~/../../workspaces/*/tools
cd ~/../../workspaces/*/tools/sjasmplus-1.18.3
make clean
make
sudo make install

rm -rf ~/../tools/sjasmplus-1.18.3

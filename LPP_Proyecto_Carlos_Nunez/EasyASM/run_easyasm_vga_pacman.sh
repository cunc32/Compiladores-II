#!/bin/bash

DIR=$(dirname $0)
export LD_LIBRARY_PATH=$DIR:$LD_LIBRARY_PATH

$DIR/EasyASM --vga-plugin $DIR/libvga-plugin-pacman.so $*

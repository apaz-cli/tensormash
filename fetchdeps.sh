#!/bin/sh

DEP_PATH='deps'
mkdir $DEP_PATH

# stb_image header
STB_PATH=$DEP_PATH'/stb_image.h'
echo $STB_PATH
wget https://raw.githubusercontent.com/nothings/stb/master/stb_image.h --output-document $STB_PATH


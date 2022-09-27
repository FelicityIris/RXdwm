#!/bin/bash

mkdir ~/Pictures/Screenshots-Xclip & pkill feh & scrot -s -f  'screenshot-xclip_%y%m%d_%h%m%s.png' -e 'xclip -selection clip -t image/png "$f" && feh "$f" && mv "$f" ~/Pictures/Screenshots-Xclip/ || mv "$f" ~/Pictures/Screenshots-Xclip/'

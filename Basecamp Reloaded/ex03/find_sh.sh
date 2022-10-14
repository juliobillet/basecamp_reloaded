#!/bin/sh
find ./ | grep ".sh" | cut -d "." -f 2 | sed "s/\///g"
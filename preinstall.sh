#!/bin/sh
mkdir -p deps

curl -s -L -o /tmp/varint.zip https://github.com/sorribas/varint.c/archive/refs/heads/master.zip
unzip -o /tmp/varint.zip -d deps
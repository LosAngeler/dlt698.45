#!/bin/sh

cj esam 2 > /nand/esam.log &
sleep 3
cj dog
cj stop
sleep 3
chmod +x /dos/cjgwn/other/zdtest698
export LD_LIBRARY_PATH=/dos/cjgwn/other:$LD_LIBRARY_PATH
/dos/gwn/other/zdtest
sleep 1
cjmain all 2> /dev/shm/null &

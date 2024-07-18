#! /bin/bash
ifconfig | grep -io "\([a-f0-9]\{2\}:\)\{5\}[a-f0-9]\{2\}"

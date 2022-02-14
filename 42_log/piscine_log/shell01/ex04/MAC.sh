#!/bin/sh
ifconfig -a | grep '\tether' | sed -e 's/ether//g' -e 's/[[:space:]]//g'

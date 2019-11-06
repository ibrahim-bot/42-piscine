#!/bin/bash

ifconfig -a link | awk '/ether/ {print $2}'

#!/bin/bash
ifconfig | grep ether | cut -c 15-31

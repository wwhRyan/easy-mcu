#!/bin/bash 
read -p "Do you want to build and run tests?[y/n]" if_test
scripts_path=$(cd `dirname $0`; pwd)
. $scripts_path/config_target_name.sh

    echo '\n< Python Scripts RUN >\n'
    python3 $scripts_path/AtCommandGenerator.py
    python3 $scripts_path/AtKeyGenerator.py

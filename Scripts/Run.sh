#!/usr/bin/bash

PROJECT_HOME=`git rev-parse --show-toplevel`      #project dir
PROJECT_NAME="Programming"                        #project name
CURRECT_DIR="LeetCode"                            #current working dir
FILE_NAME=Main.cpp                                #default file path
FLAGS="-Wall -Weffc++ -std=c++23"                 #g++ flags

build()
{
    cd $PROJECT_HOME
    mkdir -p Build
    g++ $FLAGS $PROJECT_NAME/$CURRECT_DIR/$FILE_NAME -o Build/Main
}

run()
{
    cd $PROJECT_HOME
    ./Build/Main
}

if [ $# == 0 ] ; then
    echo "Give file to compile in src dir as args!"
else
    FILE_NAME=$1
    build
    run
fi


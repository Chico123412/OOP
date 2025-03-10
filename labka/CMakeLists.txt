cmake_minimum_required(VERSION 3.30)
project(labka)

set(CMAKE_CXX_STANDARD 20)

add_executable(labka main.cpp
        "clas Trainer.h"
        "clas client.h"
        "clas membership.h")

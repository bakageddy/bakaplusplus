#!/usr/bin/env sh

set -xe
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -ggdb $1

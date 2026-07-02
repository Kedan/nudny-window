#!/usr/bin/env bash

set -euo pipefail

echo "==================================================="
echo " Static analisys"
echo "==================================================="

bazel run @hedron_compile_commands//:refresh_all
run-clang-tidy \
	-p . \
	src/base/*.cpp \
	src/*.cpp



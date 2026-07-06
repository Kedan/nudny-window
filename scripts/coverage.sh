#!/usr/bin/env bash

MOD_NAME=nudny-baseline-test

set -euo pipefail

echo "==================================================="
echo " $MOD_NAME Test coverage"
echo "==================================================="


bazel build --config=coverage //:$MOD_NAME
bazel coverage --config=coverage //:$MOD_NAME
genhtml build/coverage/testlogs/$MOD_NAME/coverage.dat \
	--output-directory build/coverage-html/

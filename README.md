# This readme is outdated. 
Must write new one. Propablu some errors in code.

# Nudny  Window

This is window wrapper for several implementations i.e.: sfml, sdk, fltk.

## Bulding

To build code use bazel commands:

`bazel build --config=<config_name> //:<target>`

where `<target>` usually is module name, i.e. `nudny-baselnie`. Available configs for build:
```
debug
release
asan
ubsan
coverage
```
## Tests

Target for test is usually module name with `-test` suffix, i.e. 
`bazel test --config=<config_name> //:nudny-baseline-test`
Availabe configurations for test:
```
valgrind
helgrind
```  

## Clang-Tidy

To use sstatic analisys run bash script in workspace directory:
`scripts/clang-tidy.sh` 

## Project structure
- ./include - main header files
- ./src - main source files
- ./scripts - Bash scripts used for build/debug
- ./tests - Unit tests
- ./build - builded binaries
- ./cov - Generated coverage raports
- ./<My_module_dir> - Any module created (example: /foo, /bar). Structure should be as root directory structure
 

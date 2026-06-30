
cc_library(
	name = "nudny-baseline",
	srcs = [
		"src/base/base.cpp",
	],
	hdrs = [
		"include/nudny/base.hpp",
	],
	includes = [
		"include",
	],
	visibility = [
		"//visibility:public",
	],
)

cc_test(
	name = "nudny-baseline-test",
	includes = ["test/include"],
	srcs = glob([
		"test/include/**/*.hpp",
		"test/src/**/*.cpp"
	]),
	copts = [
		"-Wall",
		"-Wextra",
		"-Wpedantic",
	],
	deps = [
		":nudny-baseline",
		"@googletest//:gtest_main",
	],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ ":nudny-baseline"],
)

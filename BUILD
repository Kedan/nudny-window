
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
	deps = [ 
		"@nlohmann_json//:json",
	],
)

cc_test(
	name = "nudny-baseline-test",
	includes = ["test/include"],
	srcs = glob([
		"test/include/nudny_base_test.hpp",
		"test/src/nudny_base_test.cpp"
	]),
	copts = [
		"-Wall",
		"-Wextra",
		"-Wpedantic",
	],
	deps = [
		":nudny-baseline",
		"@googletest//:gtest_main",
		"@nlohmann_json//:json",
	],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ 
		":nudny-baseline",
		"@nlohmann_json//:json"
	],
)

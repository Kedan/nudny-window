
cc_library(
	name = "nudny-window",
	srcs = [
		"src/nudny/window.cpp",
	],
	hdrs = [
		"include/nudny/window.hpp",
		"include/nudny/window/sfml.hpp",
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
	name = "nudny-window-test",
	includes = ["test/include"],
	copts = [
		"-Wall",
		"-Wextra",
		"-Wpedantic",
	],
	deps = [
		":nudny-window",
		"@googletest//:gtest_main",
		"@nlohmann_json//:json",
	],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ 
		":nudny-window",
		"@nlohmann_json//:json"
	],
)

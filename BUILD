load("@rules_cc//cc:defs.bzl","cc_library")
load("@rules_cc//cc:defs.bzl","cc_binary")

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
	visibility = ["//visibility:public"],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ ":nudny-baseline"],
)

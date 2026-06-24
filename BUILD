load("@rules_cc//cc:defs.bzl","cc_library")

cc_library(
	name = "nudny_baseline",
	srcs = [
		"src/base/base.cpp",
	],
	hdrs = glob([
		"include/**/*.hpp",
	]),
	includes = [
		"include",
	],
	visibility = ["//visibility:public"],
)

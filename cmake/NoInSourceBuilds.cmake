# This two lines doesn't work quite well, but they are leaved here just in case
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON)

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
	message(FATAL_ERROR
		"\n"
		"In-source builds are not allowed.\n"
		"Instead, provide a path to build tree like so:\n"
		"cmake -B <destination>\n"
		"\n"
		"To remove files you accidentally create execute:\n"
		"rm -rf CMakeFiles CMakeCache.txt\n"
	)
endif()

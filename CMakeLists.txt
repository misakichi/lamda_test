
cmake_minimum_required (VERSION 3.8)

project ("lamdatest")

file(GLOB_RECURSE Sources source/lamdatest.cpp ${Sources})

add_executable (lamdatest ${Sources})


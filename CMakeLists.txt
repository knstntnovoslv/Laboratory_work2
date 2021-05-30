cmake_minimum_required(VERSION 3.17)
project(laboratornaya2)

set(CMAKE_CXX_STANDARD 20)

add_executable(laboratornaya2 main.cpp Sequence.hpp DynamicArray.hpp LinkedList.hpp ArraySequence.hpp ListSequence.hpp vector.hpp test_vector.hpp time_test_vector.hpp Set.hpp test_set.hpp test_time_set.hpp time_test.hpp vector_stl_tests.hpp vector_stl.cpp vector_stl_time_test.hpp)
#include "../src/extract_max.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the extract_max directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: extractMax 1", "[output_visible]") {
	int input[] = {9, 8, 7};
    int size = 3;
    int expectedOutput[] = {8, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
	    REQUIRE(expectedOutput[i] == output[i]);
}

TEST_CASE("Function: extractMax 2", "[output_visible]") {
	int input[] = {9, 8, 7, 6};
    int size = 4;
    int expectedOutput[] = {8, 6, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
	    REQUIRE(expectedOutput[i] == output[i]);
}

 TEST_CASE("Function: extractMax 3", "[output_hidden]") {
 	int input[] = {40, 39,38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26};
     int size = 15;
     int expectedOutput[] = {39, 37, 38, 33, 36, 35, 34, 26, 32, 31, 30, 29,28, 27};
     int* output = extractMax(input, size);
     for(int i = 0; i < size - 1; i++)
 	    REQUIRE(expectedOutput[i] == output[i]);
 }

TEST_CASE("Function: extractMax 4", "[output_hidden]") {
    int input[] = {3, 1};
    int size = 2;
    int expectedOutput[] = {1};
    int *output = extractMax(input, size);
    for (int i = 0; i < size - 1; i++)
        REQUIRE(expectedOutput[i] == output[i]);
}

TEST_CASE("Function: extractMax 5", "[output_hidden]") {
    int input[] = {40, 25, 35, 5, 23, 9, 14, 4, 1, 6, 3, 7, 8};
    int size = 13;
    int expectedOutput[] = {35, 25, 14, 5, 23, 9, 8, 4, 1, 6, 3, 7};
    int *output = extractMax(input, size);
    for (int i = 0; i < size - 1; i++)
        REQUIRE(expectedOutput[i] == output[i]);
}
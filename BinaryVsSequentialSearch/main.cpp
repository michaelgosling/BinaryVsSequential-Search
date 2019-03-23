//
//  main.cpp
//  SearchingAndTrees
//
//  Created by Michael Gosling on 2019-03-23.
//  Copyright © 2019 Michael Gosling. All rights reserved.
//

#include <iostream>
#include "Algorithms.hpp"
#include <chrono>

// Start, End and Duration variables for timing searches
std::chrono::system_clock::time_point start;
std::chrono::system_clock::time_point end;
std::chrono::duration<float, std::milli> duration;
// Constant to hold array size
int const ARRAY_SIZE = 1000;

int main(int argc, const char * argv[]) {
	// Create array
	int sequentialArr[ARRAY_SIZE];
	
	// fill array with ARRAY_SIZE numbers
	for (int i = 0; i < ARRAY_SIZE; i++)
		sequentialArr[i] = i;
	
	// Run sequential search
	start = std::chrono::system_clock::now();
	for (int i : sequentialArr)
		Algorithms::SequentialSearch(sequentialArr, i, ARRAY_SIZE);
	end = std::chrono::system_clock::now();
	duration = end - start;
	std::cout << "Duration: " << duration.count() << "ms" << std::endl;

	// Run binary search
	start = std::chrono::system_clock::now();
	for (auto i : sequentialArr)
		Algorithms::BinarySearch(sequentialArr, i, ARRAY_SIZE);
	end = std::chrono::system_clock::now();
	duration = end - start;
	std::cout << "Duration: " << duration.count() << "ms" << std::endl;

    return 0;
}

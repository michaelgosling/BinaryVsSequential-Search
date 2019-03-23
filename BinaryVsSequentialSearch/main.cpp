//
//  main.cpp
//  SearchingAndTrees
//
//  Created by Michael Gosling on 2019-03-23.
//  Copyright © 2019 Michael Gosling. All rights reserved.
//

#include <iostream>
#include "Algorithms.hpp"

std::clock_t start;
std::clock_t end;
double duration;
int const ARRAY_SIZE = 1000;

int main(int argc, const char * argv[]) {
	// Create array
	int sequentialArr[ARRAY_SIZE];
	
	// fill array with ARRAY_SIZE numbers
	for (int i = 0; i < ARRAY_SIZE; i++)
		sequentialArr[i] = i;
	
	// Run sequential search
	start = std::clock();
	for (int i : sequentialArr)
		Algorithms::SequentialSearch(sequentialArr, i, ARRAY_SIZE);
	end = std::clock();
	duration = (end - start) / (double) CLOCKS_PER_SEC;
	std::cout << "Duration: " << duration << "s!" << std::endl;

	// Run binary search
	start = std::clock();
	for (auto i : sequentialArr)
		Algorithms::BinarySearch(sequentialArr, i, ARRAY_SIZE);
	end = std::clock();
	duration = (end - start) / (double) CLOCKS_PER_SEC;
	std::cout << "Duration: " << duration << "s!" << std::endl;

    return 0;
}

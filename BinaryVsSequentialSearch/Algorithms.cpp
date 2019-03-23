//
//  Algorithms.cpp
//  SearchingAndTrees
//
//  Created by Michael Gosling on 2019-03-23.
//  Copyright © 2019 Michael Gosling. All rights reserved.
//

#include "Algorithms.hpp"

/**
 * Search a sorted array of integers to find a given target, using a Binary Search approach.
 */
int Algorithms::BinarySearch(int array[], int target, int arraySize) {
	int left = 0;
	int right = arraySize - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		// Check if target is at middle of array
		if (array[mid] == target)
			return mid;

		// if target is greater, ignore left half
		// otherwise ignore right half
		if (array[mid] < target)
			left = mid + left;
		else
			right = mid - left;
	}

	return -1;
}

/**
 * Search a sorted array of integers to find a given target, using a Sequential Search approach.
 */
int Algorithms::SequentialSearch(int array[], int target, int arraySize) {
	for (auto i = 0; i < arraySize; i++){
		if (array[i] == target)
			return i;
	}
	return -1;
}

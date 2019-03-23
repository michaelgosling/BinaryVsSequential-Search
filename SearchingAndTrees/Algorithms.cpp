//
//  Algorithms.cpp
//  SearchingAndTrees
//
//  Created by Michael Gosling on 2019-03-23.
//  Copyright © 2019 Michael Gosling. All rights reserved.
//

#include "Algorithms.hpp"

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

int Algorithms::SequentialSearch(int array[], int target, int arraySize) {
	int i = 0;
	while(i < arraySize) {
		if (array[i] == target)
			return i;
	}
	return -1;
}

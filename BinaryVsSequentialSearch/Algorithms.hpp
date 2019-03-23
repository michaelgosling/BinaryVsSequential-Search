//
//  Algorithms.hpp
//  SearchingAndTrees
//
//  Created by Michael Gosling on 2019-03-23.
//  Copyright © 2019 Michael Gosling. All rights reserved.
//

#ifndef Algorithms_hpp
#define Algorithms_hpp

#include <stdio.h>

class Algorithms {
public:
    static int BinarySearch(int arrayToSearch[], int target, int arraySize);
    static int SequentialSearch(int arrayToSearch[], int target, int arraySize);
};

#endif /* Algorithms_hpp */

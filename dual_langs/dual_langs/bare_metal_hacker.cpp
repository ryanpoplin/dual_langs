//
//  bare_metal_hacker.cpp
//  dual_langs
//
//  Created by Byrdann Fox on 9/1/14.
//  Copyright (c) 2014 ExcepApps, Inc. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm>    // std::sort
#include <chrono>
#include "bare_metal_hacker.h"

void Performance_CPlusPlus::sortArray(unsigned int num_elements)
{
    std::vector<int> int_vec(num_elements);
    
    /* initialize random seed: */
    srand ((unsigned)time(NULL));
    
    for(int& x : int_vec)
    {
        x = rand() % num_elements;
    };
    
    std::chrono::high_resolution_clock::time_point begin = std::chrono::high_resolution_clock::now();
    
    std::sort(int_vec.begin(), int_vec.end());
    
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(end - begin);
    
    std::cout << "C++ executionTime: " << time_span.count() << " seconds for " << num_elements << " elements." << std::endl;
}
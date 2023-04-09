#include <iostream>
#include <vector>
#include <algorithm>

/*
The std::transform function is a part of the C++ Standard Library and is used to apply a given operation to each element of a given range and store the result in another range. The operation can be a function or a callable object that takes one or more arguments and returns a value.

The std::transform function takes four arguments:

The beginning and end of the range to transform
The beginning of the destination range
The operation to apply to each element of the range
The function returns an iterator to the end of the destination range.

*/


// Here's an example of how to use std::transform to square each element of a vector and store the result in another vector:
int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int> v2(v1.size());

    std::transform(v1.begin(), v1.end(), v2.begin(), [](int x) { return x * x; });

    for (int elem : v2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
In this example, std::transform is used to square each element of the v1 vector and store the result in the v2 vector. The lambda function [](int x) { return x * x; } is used as the operation to apply to each element of v1. The resulting v2 vector contains the squares of the elements in v1.
*/
#include <iostream>
#include <algorithm>
#include <iterator>

// Print contents of an array in C++ using std::ostream_iterator
int main()
{
	int input[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(input)/sizeof(input[0]);

	std::copy(input, input + n,
			std::ostream_iterator<int>(std::cout, " "));

	// or use std::begin and std::end in C++11
	// std::copy(std::begin(input), std::end(input),
	//		std::ostream_iterator<int>(std::cout, " "));

	return 0;
}
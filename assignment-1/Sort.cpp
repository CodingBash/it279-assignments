#include "Sort.h"
#include <iostream>
#include <limits>
/*
Time complexity.
n + (n-1) + (n-2) + ... + 1
= sum(1, n, 1)
= n(n-1) / 2
= n^2/2 * n/2
= O(n^2)
*/
std::vector<int> Sort::sort(std::vector<int> input)
{
	std::vector<int> output = std::vector<int>();
	int outputSize = static_cast<int>(input.size());
	for (int i = 0; i < outputSize ; i++) {
		int minIndex = -1;
		int minAmount = std::numeric_limits<int>::max();
		for (int j = 0; j < static_cast<int>(input.size()); j++) {
			if (input.at(j) < minAmount) {
				minIndex = j;
				minAmount = input.at(j);
			}
		}
		input.erase(input.begin() + minIndex);
		output.push_back(minAmount);
	}

	return output;

}

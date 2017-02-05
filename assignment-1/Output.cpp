#include "Output.h"

void Output::printVector(std::vector<int> output)
{
	for (auto s : output) {
		std::cout << s << " ";
	}
	std::cout << std::endl;
}

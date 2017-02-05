#include <iostream>
#include <vector>
#include "Input.h"
#include "Sort.h"
#include "Output.h"

int main() {
	Input input = Input();
	std::vector<int> userList = input.retrieveInput();
	Sort sorter = Sort();
	std::vector<int> sortedList = sorter.sort(userList);
	Output output = Output();
	output.printVector(sortedList);
}
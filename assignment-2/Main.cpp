#include "LinkedList.h"
#include "Input.h"
#include "Output.h"
#include <iostream>

int main() {
	Input input;
	std::vector<int> entryList = input.retrieveInput();
	LinkedList<int> list;
	for (int entry : entryList) {
		list.add(entry);
	}
	Output output;
	output.printVector(list.to_vec());
	std::cout << "SUM: " << list.sum() << std::endl;
	std::cout << "AVERAGE: " << list.average() << std::endl;
	system("PAUSE");
}

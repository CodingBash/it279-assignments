#include "Input.h"
#include <string>

std::vector<int> Input::retrieveInput()
{
	std::vector<int> userInput;
	std::cout << "Enter list of numbers. Type X when complete" << std::endl;
	bool inputFlag = true;
	while(inputFlag){
		std::cout << "Enter number: ";
		std::string input;
		std::cin >> input;
		if (input != "X" && input != "x") {
			userInput.push_back(std::stoi(input));
		}
		else {
			inputFlag = false;
		}
	}

	return userInput;
}

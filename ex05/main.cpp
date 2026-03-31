#include "Harl.hpp"

int main() {

	Harl harl;
	std::string input;

	while(1)
	{
		std::cout << "Choose between {DEBUG, INFO, WARNING, ERROR, EXIT};\n";
		std::getline(std::cin, input);
		if(input == "EXIT")
			break;
		harl.complain(input);
	}
	return 0;
}
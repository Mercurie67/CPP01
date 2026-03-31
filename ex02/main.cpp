#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	//Print the address:
	std::cout << "Address of the string:     " << &str << "\n";
	std::cout << "Address held by stringPTR: " << stringPTR << "\n";
	std::cout << "Address of the stringREF:  " << &stringREF << "\n";

	//Print the value:
	std::cout << "Value of the string:        " << str << "\n";
	std::cout << "Value pointed by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value of the stringREF:     " << stringREF << "\n";

	return 0;
}

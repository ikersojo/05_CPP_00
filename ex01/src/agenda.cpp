#include <iostream>
#include <string>
// #include "../inc/Contact.hpp"
// #include "../inc/PhoneBook.hpp"

int	main(void)
{
	std::string	input;

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Please type an option:" << std::endl;
		std::cout << "  - ADD" << std::endl;
		std::cout << "  - SEARCH" << std::endl;
		std::cout << "  - EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
			std::cout << "let's introduce!" << std::endl;
		else if (input.compare("SEARCH") == 0)
			std::cout << "let's search!" << std::endl;
	}
	return (0);
}
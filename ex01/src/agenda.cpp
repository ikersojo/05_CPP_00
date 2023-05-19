#include <iostream>
#include <string>
// #include "../inc/Contact.hpp"
// #include "../inc/PhoneBook.hpp"



int	main(void)
{
	std::string	input;

	while (input.compare("EXIT") != 0)
	{
		std::cout << std::endl << std::endl << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "Please type an option:" << std::endl;
		std::cout << "  - ADD" << std::endl;
		std::cout << "  - SEARCH" << std::endl;
		std::cout << "  - EXIT" << std::endl;
		std::cout << "-----------------------------" << std::endl << std::endl;
		std::cout << " > ";
		std::cin >> input;
		if (input == "ADD")
			std::cout << "let's introduce!" << std::endl; // MODIFICAR
		else if (input == "SEARCH")
			std::cout << "let's search!" << std::endl; // MODIFICAR
		else if (input != "EXIT")
			std::cout << "\033[0;31mNot a valid option!\033[0;39m" << std::endl;

	}
	return (0);
}
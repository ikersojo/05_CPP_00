/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:06:04 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/20 19:06:06 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/agenda.hpp"

std::string	getUserInput(void)
{
	std::string	input;

	std::cout << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Please type an option:" << std::endl;
	std::cout << "  - ADD" << std::endl;
	std::cout << "  - SEARCH" << std::endl;
	std::cout << "  - EXIT" << std::endl;
	std::cout << "-----------------------------" << std::endl << std::endl;
	std::cout << " > ";
	std::getline(std::cin, input);
	return (input);
}

int	main(void)
{
	std::string	input;
	PhoneBook agenda;

	while (input != "EXIT")
	{
		input = getUserInput();
		if (input == "ADD")
			agenda.addContact();
		else if (input == "SEARCH")
			agenda.list();
		else if (input != "EXIT")
			std::cout << "\033[0;31mNot a valid option!\033[0;39m" << std::endl;
	}
	return (0);
}

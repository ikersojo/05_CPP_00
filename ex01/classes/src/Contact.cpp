/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:54:13 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 10:31:24 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

// Class Constructor
Contact::Contact(void)
{
	this->_index = -1;
}

//Class Destructor
Contact::~Contact(void)
{
}

// Asks for the contact details and adds them to the Contact instance
void	Contact::add(int contactIndex)
{
	this->_index = contactIndex;
	std::cout << "    First name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "    Last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "    Nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "    Phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "    Darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
	std::cout << "\033[0;92m";
	std::cout << std:: endl << "    Contact added!" << std::endl;
	std::cout << "\033[0;39m" << std:: endl;
}

// Returnes a trimmed string if is longer than 10 characters
static std::string	trimString(std::string str)
{
	std::string	trimmed;
	size_t		i;

	if (str.size() <= 10)
		return (str);
	i = 0;
	while (i < str.size() && i < 9)
	{
		trimmed.push_back(str[i++]);
	}
	trimmed.push_back('.');
	return (trimmed);
}

// Prints in a single line the summarized contact details
void	Contact::printInList(void)
{
	if (this->_index == -1)
		return ;
	std::cout << std::setw(10) << this->_index << "|";
	std::cout << std::setw(10) << trimString(this->_firstName) << "|";
	std::cout << std::setw(10) << trimString(this->_lastName) << "|";
	std::cout << std::setw(10) << trimString(this->_nickname) << std::endl;
}

// Prints the detailed contact information (one line per entry)
void	Contact::printDetails(void)
{
	std::cout << std::endl << "    Contact Details:" << std::endl;
	std::cout << "      - Contact Index:" << this->_index << std::endl;
	std::cout << "      - First Name:" << this->_firstName << std::endl;
	std::cout << "      - Last Name:" << this->_lastName << std::endl;
	std::cout << "      - Nickname:" << this->_nickname << std::endl;
	std::cout << "      - Phone Number:" << this->_phoneNumber << std::endl;
	std::cout << "      - Darkest Secret:" << this->_darkestSecret << std::endl;
}

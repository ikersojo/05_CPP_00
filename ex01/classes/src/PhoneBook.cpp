/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:02:00 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 10:31:24 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

// Class Constructor
PhoneBook::PhoneBook(void)
{
	this->_maxContacts = MAX_CONTACTS;
	this->_contactIndex = 0;
	this->_contactsToPrint = -1;
}

// Class Destructor
PhoneBook::~PhoneBook(void)
{
}

// Adds a new contact in the Array.
// Uses the PhoneBook Class instance _contactIndex variable to locate it in the array
void	PhoneBook::addContact(void)
{
	contacts[this->_contactIndex].add(this->_contactIndex);
	this->_contactIndex++;
	if (this->_contactIndex == MAX_CONTACTS)
		this->_contactIndex = 0;
	if (this->_contactsToPrint < MAX_CONTACTS - 1)
		this->_contactsToPrint++;
}

// Aux function to check if the string provided is a number
static bool	isPosInt(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.size())
	{
		if (std::isdigit(str[i++]) == 0)
			return (false);
	}
	return (true);
}

// Aux function to print list header
void	printHeader(void)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}

// Prints the list of contacts
void	PhoneBook::list(void)
{
	int			i;
	std::string	opt;

	printHeader();
	i = -1;
	while (++i < MAX_CONTACTS)
		contacts[i].printInList();
	std::cout << std:: endl << "Please, select the index for details: ";
	std::getline(std::cin, opt);
	if (isPosInt(opt) && std::stoi(opt) >= 0 && std::stoi(opt) <= this->_contactsToPrint)
		contacts[std::stoi(opt)].printDetails();
	else
		std::cout << "\033[0;31mNot a valid option!\033[0;39m" << std::endl;
}

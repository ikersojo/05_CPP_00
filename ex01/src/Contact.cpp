#include <iostream>

#include "../inc/Contact.hpp"

Contact::Contact(std::string _firstName, std::string _lastName,
				std::string _nickname, std::string _phoneNumber,
				std::string _darkestSecret)
{
	this->_index = _classIndex;
	_classIndex += 1;
	this->_firstName = _firstName;
	this->_lastName = _lastName;
	this->_nickname = _nickname;
	this->_phoneNumber = _phoneNumber;
	this->_darkestSecret = _darkestSecret;

	std::cout << "Contact generated!" << std::endl;
	std::cout << "  - Contact Index:" << this->_index << std::endl;
	std::cout << "  - First Name:" << this->_firstName << std::endl;
	std::cout << "  - Last Name:" << this->_lastName << std::endl;
	std::cout << "  - Nickname:" << this->_nickname << std::endl;
	std::cout << "  - Phone Number:" << this->_phoneNumber << std::endl;
	std::cout << "  - Darkest Secret:" << this->_darkestSecret << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Called. this" << this->_firstName << std::endl;
	return ;
}

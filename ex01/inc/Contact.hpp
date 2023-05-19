#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		// Contact(std::string _firstName, std::string _lastName,
		// 		std::string _nickname, std::string _phoneNumber,
		// 		std::string _darkestSecret);



		// void		add(std::string _firstName, std::string _lastName,
		// 				std::string _nickname, std::string _phoneNumber,
		// 				std::string _darkestSecret);

		// void		add(void);
		// void		search(void);
	
		// void		setFirstName(std::string str);
		// void		setLastName(std::string str);
		// void		setNickname(std::string str);
		// void		setPhoneNumber(std::string str);
		// void		setDarkestSecret(std::string str);

		// int			getIndex(void) const;
		// std::string	getFirstName(void) const;
		// std::string	getLastName(void) const;
		// std::string	getNickname(void) const;
		// std::string	getPhoneNumber(void) const;
		// std::string	getDarkestSecret(void) const;

	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		static int	_classIndex;

		void		setIndex(int);

};
#endif // CONTACT_HPP

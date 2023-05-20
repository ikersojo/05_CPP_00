/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:02:03 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/20 19:02:07 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# include <iostream>
# include "../inc/Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(void);
		void	list(void);

	private:
		int		_contactIndex;
		int		_maxContacts;
		int		_contactsToPrint;
		Contact contacts[MAX_CONTACTS];
};

#endif // PHONEBOOK_HPP

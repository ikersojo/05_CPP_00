/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:11:41 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/20 19:11:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void	ft_print_uppercase_string(char *str)
{
	size_t	i;

	i = 0;
	while (i < std::strlen(str))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - ('a' - 'A'));
		i++;
	}
	std::cout << str;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
		{
			ft_print_uppercase_string(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

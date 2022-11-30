/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:57:08 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 11:52:18 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string line;

	while (1)
	{
		std::cout << "Please enter one of 3 commands (ADD, SEARCH, EXIT) : ";
		getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phonebook.add_contact();
		else if (line.compare("EXIT") == 0)
			break ;
		else if (line.compare("SEARCH") == 0)
			phonebook.print();
		else
			std::cout << "Wrong command" << std::endl;
	}
	return (0);
}
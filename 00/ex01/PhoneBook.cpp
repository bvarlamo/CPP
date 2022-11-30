/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:40:16 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 11:52:20 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void	PhoneBook::print( void )
{
	for (int i = 0; i < this->entries; i++)
	{
		std::cout << i;
		this->contacts[i].search();
		std::cout << std::endl;
	}
	int	n;
	while (1 && this->entries > 0)
	{
		std::cout << "Please chose index of a contact: ";
		std::cin >> n;
		if (std::cin.fail())
		{
			std::cout << "Wrong index" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (n >= 0 && n < this->entries)
		{
			this->contacts[n].printing();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
		else
		{
			std::cout << "Wrong index" << std::endl;
		}
	}
}

void	PhoneBook::add_contact( void )
{
	this->contacts[this->count].addfirstname();
	this->contacts[this->count].addlastname();
	this->contacts[this->count].addnickname();
	this->contacts[this->count].addphone();
	this->contacts[this->count].addsecret();
	this->count++;
	if (this->count == 8)
		this->count = 0;
	if (this->entries < 8)
		this->entries++;
}

int PhoneBook::entries = 0;
int PhoneBook::count = 0;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:47:46 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 11:52:09 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdio>
#include <iostream>
#include <iomanip>

void	Contact::addfirstname( void )
{
	while (1)
	{
		std::cout << "Please enter contacts first name: ";
		getline(std::cin, this->_FirstName);
		if (this->_FirstName[0])
			break ;
		else
			std::cout << "Cant be empty" << std::endl;
	}
}

void	Contact::addlastname( void )
{
	while (1)
	{
		std::cout << "Please enter contacts last name: ";
		getline(std::cin, this->_LastName);
		if (this->_LastName[0])
			break ;
		else
			std::cout << "Cant be empty" << std::endl;
	}
}

void	Contact::addnickname( void )
{
	while (1)
	{
		std::cout << "Please enter contacts nickname: ";
		getline(std::cin, this->_Nickname);
		if (this->_Nickname[0])
			break ;
		else
			std::cout << "Cant be empty" << std::endl;
	}
}

void	Contact::addphone( void )
{
	while (1)
	{
		std::cout << "Please enter contacts phone number: ";
		getline(std::cin, this->_PhoneNumber);
		if (this->_PhoneNumber[0])
			break ;
		else
			std::cout << "Cant be empty" << std::endl;
	}
}

void	Contact::addsecret( void )
{
	while (1)
	{
		std::cout << "Please enter contacts darkest secret: ";
		getline(std::cin, this->_DarkestSecret);
		if (this->_DarkestSecret[0])
			break ;
		else
			std::cout << "Cant be empty" << std::endl;
	}
}

void	Contact::printing( void )
{
	std::cout << _FirstName << std::endl;
	std::cout << _LastName << std::endl;
	std::cout << _Nickname << std::endl;
	std::cout << _PhoneNumber << std::endl;
	std::cout << _DarkestSecret << std::endl;
}

void	Contact::search( void )
{
	std::string	tmp;
	unsigned int len;

	
	tmp = _FirstName;
	len = tmp.size();
	if (len > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	std::cout << tmp;
	tmp = _LastName;
	len = tmp.size();
	if (len > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	std::cout << tmp;
	tmp = _Nickname;
	len = tmp.size();
	if (len > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	std::cout << tmp;
	tmp = _PhoneNumber;
	len = tmp.size();
	if (len > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	std::cout << tmp;
}
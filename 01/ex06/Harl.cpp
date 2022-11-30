/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:04:09 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:20:23 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain (std::string level)
{
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	void	(Harl::*pt[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;
	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		(*this.*pt[0])();
	case 1:
		(*this.*pt[1])();
	case 2:
		(*this.*pt[2])();
	case 3:
		(*this.*pt[3])();
		break ;
	default:
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
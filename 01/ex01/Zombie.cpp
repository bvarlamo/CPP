/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:11:16 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 10:52:04 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) :_name("xoxo")
{
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::naming(std::string name)
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:04:57 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:32:32 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	this->_type = NULL;
};

void	HumanB::setWeapon(Weapon &type){
	_type = &type;
}


void	HumanB::attack()
{
	if (!this->_type)
		std::cout << this->_name << " cant attack without weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " <<  _type->getType() << std::endl;
}
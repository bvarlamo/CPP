/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:26:50 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:34:01 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string wtype) : _type(wtype){
};

std::string const & Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
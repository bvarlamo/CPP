/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:45:24 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 14:55:16 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type){
};

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " <<  _type.getType() << std::endl;
}
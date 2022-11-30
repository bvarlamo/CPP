/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:21:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 12:50:01 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	this->type = obj.type;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}


std::string	AAnimal::getType() const{

	return(this->type);
}
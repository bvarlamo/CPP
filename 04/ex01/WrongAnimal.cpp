/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:15:45 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 11:04:39 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	this->type = obj.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound() const{

	std::cout << "WrongAnimal sound" << std::endl;
	return ;
}

std::string	WrongAnimal::getType() const{

	return(this->type);
}
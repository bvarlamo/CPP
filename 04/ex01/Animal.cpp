/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:21:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:54 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	this->type = obj.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const{

	std::cout << "[ SILENCE ]" << std::endl;
	return ;
}

std::string	Animal::getType() const{

	return(this->type);
}
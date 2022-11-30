/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:14:50 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 18:53:31 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	this->type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const{

	std::cout << "wuufff" << std::endl;
	return ;
}
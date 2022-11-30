/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:13:53 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 12:18:17 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	this->ptr = new Brain();
}

Cat::Cat(const Cat& obj)
{
	this->type = obj.type;
	this->ptr = new Brain(*obj.ptr);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->ptr;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const{

	std::cout << "Mjauuu" << std::endl;
	return ;
}
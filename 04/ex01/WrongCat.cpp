/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:16:38 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 11:04:49 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	this->type = obj.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const{

	std::cout << "Wrong Mjauuu" << std::endl;
	return ;
}
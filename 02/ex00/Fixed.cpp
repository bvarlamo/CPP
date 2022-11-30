/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:18 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/07 15:34:45 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPoint(0){
	
	std::cout << "Deafult constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(){

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

int	Fixed::getRawBits( void ) const
{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

Fixed&	Fixed::operator=( Fixed const& rhs){

	std::cout << "Copy assigment operator called" << std::endl;
	if ( this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return (*this);
}

void	Fixed::setRawBits( int const raw ){
	
	this->_fixedPoint = raw;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:18 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/07 17:38:21 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixedPoint(0){
	
	std::cout << "Deafult constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int x){
	
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = x << this->_fract;
	return ;
}

Fixed::Fixed(const float n){
	
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(n * (1 << this->_fract));
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

float	Fixed::toFloat( void ) const{

	return ((float)this->_fixedPoint / (float)(1 << this->_fract));
}
int		Fixed::toInt( void ) const{
	
	return ((int)(this->_fixedPoint >> this->_fract));
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i){

	o << i.toFloat();

	return (o);
}
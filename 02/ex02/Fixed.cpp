/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:18 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 14:59:49 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0){
	
	return ;
}

Fixed::Fixed(const int x){
	
	this->_fixedPoint = x << this->_fract;
	return ;
}

Fixed::Fixed(const float n){
	
	this->_fixedPoint = roundf(n * (1 << this->_fract));
	return ;
}

Fixed::~Fixed(){

	return ;
}

Fixed::Fixed( Fixed const &src){

	*this = src;

	return ;
}

int	Fixed::getRawBits( void ) const
{

	return (this->_fixedPoint);
}

Fixed&	Fixed::operator=( Fixed const& rhs){

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
	
	return (this->_fixedPoint >> this->_fract);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i){

	o << i.toFloat();

	return (o);
}

bool	Fixed::operator>(Fixed const &i)const{

	if (this->getRawBits() > i.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &i)const{

	if (this->getRawBits() < i.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &i)const{
	
	if (this->getRawBits() > i.getRawBits() || this->getRawBits() == i.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &i)const{

	if (this->getRawBits() < getRawBits() || this->getRawBits() == i.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &i)const{

	if (this->getRawBits() == i.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &i)const{

	if (this->getRawBits() != i.getRawBits())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed const &i)const{

	return (Fixed(this->getRawBits() + i.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const &i)const{

	return (Fixed(this->getRawBits() - i.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const &i)const{

	Fixed	res(*this);
	res.setRawBits((this->getRawBits() * i.getRawBits()) / (1 << this->_fract));
	return (res);
}

Fixed	Fixed::operator/(Fixed const &i)const{

	Fixed res(*this);
	if (i._fixedPoint == 0)
	{
		std::cout << "Cannot divide by zero" << std::endl;
		return (res);
	}
	res.setRawBits((this->getRawBits() * ( 1 << this->_fract)) / i.getRawBits());
	return (res);
}


Fixed&	Fixed::operator++( void ){

	this->_fixedPoint++;
	return (*this);
}

Fixed&	Fixed::operator--( void ){

	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator++( int ){

	Fixed	tmp(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator--( int ){

	Fixed	tmp(*this);
	operator--();
	return (tmp);
}

Fixed &	Fixed::min(Fixed& i1, Fixed& i2){

	if (i1 < i2)
		return (i1);
	else
		return (i2);
}

Fixed const&	Fixed::min(Fixed const& i1, Fixed const& i2){

	if (i1 < i2)
		return (i1);
	else
		return (i2);
}

Fixed &	Fixed::max(Fixed& i1, Fixed& i2){

	if (i1 > i2)
		return (i1);
	else
		return (i2);
}

Fixed const&	Fixed::max(Fixed const& i1, Fixed const& i2){

	if (i1 > i2)
		return (i1);
	else
		return (i2);
}
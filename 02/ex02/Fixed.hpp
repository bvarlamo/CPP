/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 12:56:44 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fract = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float n);
		Fixed( Fixed const &src);
		~Fixed();

		Fixed&	operator=( Fixed const& rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator>(Fixed const &i)const;
		bool	operator<(Fixed const &i)const;
		bool	operator>=(Fixed const &i)const;
		bool	operator<=(Fixed const &i)const;
		bool	operator==(Fixed const &i)const;
		bool	operator!=(Fixed const &i)const;

		Fixed	operator+(Fixed const &i)const;
		Fixed	operator-(Fixed const &i)const;
		Fixed	operator*(Fixed const &i)const;
		Fixed	operator/(Fixed const &i)const;

		Fixed&	operator++( void );
		Fixed&	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed &		min(Fixed& i1, Fixed& i2);
		static Fixed const&	min(Fixed const& i1, Fixed const& i2);
		static Fixed &		max(Fixed& i1, Fixed& i2);
		static Fixed const&	max(Fixed const& i1, Fixed const& i2);
};

std::ostream &	operator<<(std::ostream &o, Fixed const &i);

#endif
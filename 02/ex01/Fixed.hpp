/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/07 17:05:25 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fract = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float n);
		Fixed( const Fixed& src);
		~Fixed();

		Fixed&	operator=( Fixed const& rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &	operator<<(std::ostream &o, Fixed const &i);

#endif
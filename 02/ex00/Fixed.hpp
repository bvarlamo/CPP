/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:42:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:45:02 by bvarlamo         ###   ########.fr       */
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
		Fixed( const Fixed& src);
		~Fixed();

		Fixed&	operator=( Fixed const& rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
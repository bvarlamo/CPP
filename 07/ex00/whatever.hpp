/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:05:48 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/15 14:45:56 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void	swap(T &x, T &y){

	T	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const &	min(T const & x, T const & y){

	if (x < y)
		return (x);
	else
		return (y);
}

template<typename T>
T const &	max(T const & x, T const & y){

	if (x > y)
		return (x);
	else
		return (y);
}

#endif
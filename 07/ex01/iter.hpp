/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:05:48 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/18 10:25:46 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>
#include <string>
#include <array>

template<typename T>
void	nums(T &arg){

	arg += 1;
}

template<typename T>
void	chars(T &arg){

	arg = 'a';
}

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T &arg)){

	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}


#endif
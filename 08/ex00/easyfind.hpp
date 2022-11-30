/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:41:16 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/23 09:58:12 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>


template <typename T >
void	easyfind(T cont, int integer){
	
	typename T::iterator it = std::find(cont.begin(), cont.end(), integer);
	if (it != cont.end())
		std::cout << integer << " located at: [" << (std::distance(cont.begin(), it)) << "] index" << std::endl;
	else
		throw (std::exception());
}

#endif
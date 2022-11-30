/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:56:47 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:36:43 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* str1 = &str;
	std::string& str2 = str;

	std::cout << &str <<std::endl;
	std::cout << &*str1 <<std::endl;
	std::cout << &str2 <<std::endl;

	std::cout << str <<std::endl;
	std::cout << *str1 <<std::endl;
	std::cout << str2 <<std::endl;

	return (0);
}
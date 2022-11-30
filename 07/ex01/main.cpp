/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:06:23 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/18 10:29:01 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	int arr[] = {1, 5, 7, 2, 4, 10};
	float farr[] = {1.5, 5.2, 7.9, 2.1, 4.44, 10.3};
	char carr[] = {'a', 'F', '*'};
	char str[] = "Hello";
	std::string str2[] = {"Hi", "hey", "bye"};

	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << " ";
	::iter(arr, sizeof(arr)/sizeof(arr[0]), &nums); std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << farr[i] << " ";
	::iter(farr, sizeof(farr)/sizeof(farr[0]), &nums); std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << farr[i] << " ";
	std::cout << std::endl;	
	for (int i = 0; i < 3; i++)
		std::cout << carr[i] << " ";
	::iter(carr, sizeof(carr)/sizeof(carr[0]), &chars); std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << carr[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << str[i] << " ";
	::iter(str, sizeof(str)/sizeof(str[0]), &chars); std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;	
	for (int i = 0; i < 3; i++)
		std::cout << str2[i] << " ";
	::iter(str2, sizeof(str2)/sizeof(str2[0]), &chars); std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << str2[i] << " ";
	std::cout << std::endl;


	return (0);
}
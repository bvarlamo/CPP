/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:40:21 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/23 09:58:16 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main()
{
	std::cout << "----Vector----" << std::endl;
	int	ints[] = {1, 2, 3, 4, 5};
	std::vector<int> values(ints, ints + 5);
	try
	{
		easyfind(values, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----List----" << std::endl;
	int	ints1[] = {1, 2, 3, 4, 5};
	std::list<int> values1(ints1, ints1 + 5);
	try
	{
		easyfind(values1, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "----Deque----" << std::endl;
	int	ints2[] = {1, 2, 3, 4, 5};
	std::deque<int> values2(ints2, ints2 + 5);
	try
	{
		easyfind(values2, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
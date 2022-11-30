/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:07:32 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/23 09:58:28 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::cout << "----Filling automatically----" << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.fillArray();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----Filling manualy----" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "SLongest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
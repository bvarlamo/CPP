/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:33:42 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/14 18:59:26 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *	generate(void)
{
	Base* ptr;
	srand(time(NULL));
	int	n = rand() % 3;
	switch (n)
	{
		case 0:
			ptr = new A;
			break ;
		case 1:
			ptr = new B;
			break ;
		case 2:
			ptr = new C;
			break ;
	}
	return (ptr);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Type A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "Type B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "Type C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try
	{
		if ((&dynamic_cast<A&>(p)))
		{
			std::cout << "Type A" << std::endl;
			return ;
		}
	}
	catch(std::exception & e){	
	}
	try
	{
		if ((&dynamic_cast<B&>(p)))
		{
			std::cout << "Type B" << std::endl;
			return ;
		}
	}
	catch(std::exception & e){	
	}
	try
	{
		if ((&dynamic_cast<C&>(p)))
		{
			std::cout << "Type C" << std::endl;
			return ;
		}
	}
	catch(std::exception & e){	
	}
}

int	main()
{
	Base* base = generate();

	identify(base);
	identify(*base);

	delete base;
	
	return (0);
}
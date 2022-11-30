/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:51:22 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 10:31:58 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try{
		Bureaucrat a;
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
		std::cout << std::endl;
		Bureaucrat b("James", 100);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		Bureaucrat a("James", 0);
		std::cout << a;
		a.decrementGrade();
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		Bureaucrat a("James", 151);
		std::cout << a;
		a.incrementGrade();
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	return (0);
}
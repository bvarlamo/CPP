/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:51:22 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 18:44:33 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main()
{
	std::cout << "***Presidential test***"<< std::endl;
	try{
		Bureaucrat a("James", 1);
		std::cout << a;
		PresidentialPardonForm f;
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "***Robotomy test***"<< std::endl;
	try{
		Bureaucrat a("James", 5);
		std::cout << a;
		RobotomyRequestForm f("Coal miners");
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "***Schrubbery test***"<< std::endl;
	try{
		Bureaucrat a("James", 130);
		std::cout << a;
		ShrubberyCreationForm f;
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	return (0);
}
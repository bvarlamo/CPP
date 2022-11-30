/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:51:22 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 18:47:33 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		std::cout << "***Basic test***" << std::endl;
		Bureaucrat a("Amanda", 15);
		try{
			Form f1("Form1", 10, 10);
			std::cout << f1;
			a.signForm(f1);
			std::cout << f1;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f2("Form2", 20, 20);
			std::cout << f2;
			a.signForm(f2);
			std::cout << f2;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f3("Form3", 0, 10);
			a.signForm(f3);
			std::cout << f3;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f4("Form4", 151, 20);
			a.signForm(f4);
			std::cout << f4;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
	
	}
	
	return (0);
}
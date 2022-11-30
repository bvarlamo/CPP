/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:12:22 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 18:35:17 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern(){

	return ;
}

Intern::Intern(const Intern& obj){

	return ;
}

Intern::~Intern(){

	return ;
}

Intern& Intern::operator=(const Intern& rhs){

	return (*this);
}

Form*	Intern::makePresidential(std::string target){

	Form*	form = new PresidentialPardonForm(target);
	return (form);
}

Form*	Intern::makeRobotomy(std::string target){

	Form*	form = new RobotomyRequestForm(target);
	return (form);
}

Form*	Intern::makeShrubbery(std::string target){

	Form*	form = new ShrubberyCreationForm(target);
	return (form);
}

Form*	Intern::makeForm(std::string name, std::string target){

	typedef	Form* (Intern::*method_functions)(std::string);
	
	method_functions ptr[3] = {&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			Form* form = (this->*ptr[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	std::cout << "Form with a name: \"" << name << "\", doesnt exist" << std::endl;
	return (NULL);
}
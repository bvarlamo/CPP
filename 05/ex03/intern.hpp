/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:12:42 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 18:10:28 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:

	public:
		Intern();
		Intern(const Intern& obj);
		~Intern();

		Intern& operator=(const Intern& rhs);

		Form*	makeForm(std::string name, std::string target);
		Form*	makePresidential(std::string target);
		Form*	makeRobotomy(std::string target);
		Form*	makeShrubbery(std::string target);
};

#endif
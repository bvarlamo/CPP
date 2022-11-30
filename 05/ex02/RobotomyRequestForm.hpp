/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:27:34 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 15:23:06 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;

class	RobotomyRequestForm : public Form
{
	private:
		std::string		_target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

		std::string	getTarget() const;
		virtual void	execute(Bureaucrat const & executor) const;
};


#endif
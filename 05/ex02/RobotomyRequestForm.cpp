/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:26:54 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 15:58:37 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default_target"){
	
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj){

	*this = obj;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const{

	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if (!this->getSignedOrNot())
		throw RobotomyRequestForm::notSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		std::cout << "<<Makes some drilling noises>>" << std::endl;
		srand(time(NULL));
		int	n = rand() % 2;
		std::cout << n << std::endl;
		if (n == 1)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:24:44 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 15:00:24 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default_target"){
	
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target){

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj){

	*this = obj;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const{

	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{


	if (!this->getSignedOrNot())
		throw PresidentialPardonForm::notSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

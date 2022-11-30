/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:44:27 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 14:40:56 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150){

	std::cout << "Form default constructor called" << std::endl;
	if (this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)  : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
		
	return ;
}

Form::Form(const Form& obj) : _name(obj.getName()), _signed(obj.getSignedOrNot()), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExecute()){

	std::cout << "Form constructor with arguments called" << std::endl;
	return ;
}

Form::~Form(){

	std::cout << "Form destructor called" << std::endl;
	return ;
}

Form& Form::operator=(const Form& rhs){

	std::cout << "Form copy constructor called" << std::endl;
	this->_signed = rhs.getSignedOrNot();
	return (*this);
}

std::string	Form::getName() const{

	return (this->_name);
}

bool	Form::getSignedOrNot() const{

	return (this->_signed);
}

int		Form::getGradeToSign() const{

	return (this->_gradeToSign);
}

int		Form::getGradeToExecute() const{

	return (this->_gradeToExecute);
}

std::ostream &	operator<<( std::ostream & o, Form const & i){

	o << "Name: " << i.getName() << "\n" << "Signed: " << i.getSignedOrNot()<< "\n" << "Needed grade to sign: " << i.getGradeToSign() << "\n" << "Needed grade to execute: " << i.getGradeToExecute()<< std::endl;;

	return (o);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[ Grade too High ]");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[ Grade too Low ]");
}

void	Form::beSigned(const Bureaucrat& obj){

	if (obj.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char* Form::notSigned::what() const throw()
{
	return ("[ Not signed ]");
}

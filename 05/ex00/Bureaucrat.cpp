/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:54:42 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 11:20:33 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor with arguments called" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName()), _grade(obj.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const{

	return (this->_name);
}

int const	Bureaucrat::getGrade() const{

	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[ Grade too High ]");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[ Grade too Low ]");
}

void		Bureaucrat::incrementGrade(){

	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void		Bureaucrat::decrementGrade(){

	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;

}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i){

	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;;

	return (o);
}
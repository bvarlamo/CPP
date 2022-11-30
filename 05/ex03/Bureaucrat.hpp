/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:51:53 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 14:50:57 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		std::string	const	_name;
		int 				_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& rhs);

		std::string	getName() const;
		int const	getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

		void	signForm(Form& obj);
		void	executeForm(Form const & form);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};


};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i);


#endif
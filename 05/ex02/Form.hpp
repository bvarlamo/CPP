/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:43:46 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 14:40:53 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& obj);
		~Form();

		Form& operator=(const Form& rhs);

		std::string	getName() const;
		bool		getSignedOrNot() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void			beSigned(const Bureaucrat& obj);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class	notSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &o, Form const &i);

#endif
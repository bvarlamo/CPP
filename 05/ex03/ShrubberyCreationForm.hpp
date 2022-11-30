/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:29:55 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 15:59:38 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class	ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

		std::string	getTarget() const;
		virtual void	execute(Bureaucrat const & executor) const;
};


#endif
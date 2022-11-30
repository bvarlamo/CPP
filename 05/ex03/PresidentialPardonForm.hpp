/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:25:11 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 14:46:09 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;

class	PresidentialPardonForm : public Form
{
	private:
		std::string		_target;
		
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

		std::string	getTarget() const;
		virtual void	execute(Bureaucrat const & executor) const;
};


#endif
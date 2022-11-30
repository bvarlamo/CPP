/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:29:20 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/12 18:40:02 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default_target"){
	
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target){

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj){

	*this = obj;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::string	ShrubberyCreationForm::getTarget() const{

	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	if (!this->getSignedOrNot())
		throw ShrubberyCreationForm::notSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		std::ofstream outfile(this->_target + "_shrubbery");
		outfile << "                                                         ." << std::endl;
        outfile << "                                      .         ;  " << std::endl;
        outfile << "         .              .              ;%     ;;   " << std::endl;
        outfile << "           ,           ,                :;%  %;   " << std::endl;
        outfile << "            :         ;                   :;%;'     .,   " << std::endl;
        outfile << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        outfile << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        outfile << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        outfile << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        outfile << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        outfile << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        outfile << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        outfile << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        outfile << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        outfile << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        outfile << "                    ;@%. :@%%  %@@%;       " << std::endl;
        outfile << "                      %@bd%%%bd%%:;     " << std::endl;
        outfile << "                        #@%%%%%:;;" << std::endl;
        outfile << "                        %@@%%%::;" << std::endl;
        outfile << "                        %@@@%(o);  . '         " << std::endl;
        outfile << "                        %@@@o%;:(.,'         " << std::endl;
        outfile << "                    `.. %@@@o%::;         " << std::endl;
        outfile << "                       `)@@@o%::;         " << std::endl;
        outfile << "                        %@@(o)::;        " << std::endl;
        outfile << "                       .%@@@@%::;         " << std::endl;
        outfile << "                       ;%@@@@%::;.          " << std::endl;
        outfile << "                      ;%@@@@%%:;;;. " << std::endl;
        outfile << "                  ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
	}
}
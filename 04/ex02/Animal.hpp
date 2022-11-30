/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:13:08 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:50 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define COMMENTS_CANONICAL 1

#define COLOR_GREEN "\033[38;5;112m"
#define COLOR_BLUE "\033[1;94;49m"
#define COLOR_GREY "\033[1;90;49m"
#define COLOR_DEFAULT "\033[0m"
#define COLOR_PINK "\033[38;5;200m"
#define COLOR_PURPLE "\033[38;5;135m"
#define COLOR_YELLOW "\033[38;5;220m"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& obj);
		virtual ~Animal();
		Animal& operator=(const Animal& rhs);

		virtual void	makeSound() const;
		std::string	getType() const;
		
};


#endif
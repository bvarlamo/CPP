/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:13:08 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:15:47 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#define COMMENTS_CANONICAL 1

#define COLOR_GREEN "\033[38;5;112m"
#define COLOR_BLUE "\033[1;94;49m"
#define COLOR_GREY "\033[1;90;49m"
#define COLOR_DEFAULT "\033[0m"
#define COLOR_PINK "\033[38;5;200m"
#define COLOR_PURPLE "\033[38;5;135m"
#define COLOR_YELLOW "\033[38;5;220m"

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal& obj);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& rhs);

		virtual void	makeSound() const = 0;
		std::string	getType() const;
		
};


#endif
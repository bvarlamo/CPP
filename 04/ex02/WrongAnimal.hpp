/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:15:58 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 11:04:42 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& rhs);

		void	makeSound() const;
		std::string	getType() const;
		
};

#endif
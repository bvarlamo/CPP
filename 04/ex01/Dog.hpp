/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:14:59 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 11:38:15 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class	Dog : public	Animal
{

	private:

			Brain* ptr;

	public:
		Dog();
		Dog(const Dog& obj);
		~Dog();
		Dog& operator=(const Dog& rhs);

		void	makeSound() const;
};

#endif
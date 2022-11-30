/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:14:03 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 18:56:50 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"


class	Cat : public	Animal
{

	public:
		Cat();
		Cat(const Cat& obj);
		~Cat();
		Cat& operator=(const Cat& rhs);

		void	makeSound() const;

};

#endif
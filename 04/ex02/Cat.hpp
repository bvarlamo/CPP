/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:14:03 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:17:35 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"


class	Cat : public	AAnimal
{

	private:

			Brain* ptr;

	public:
		Cat();
		Cat(const Cat& obj);
		~Cat();
		Cat& operator=(const Cat& rhs);

		void	makeSound() const;

};

#endif
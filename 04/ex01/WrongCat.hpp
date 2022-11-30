/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:16:50 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 11:04:51 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"


class	WrongCat : public	WrongAnimal
{

	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		~WrongCat();
		WrongCat& operator=(const WrongCat& rhs);

		void	makeSound() const;

};


#endif
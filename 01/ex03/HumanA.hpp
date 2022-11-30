/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:35:42 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 14:54:53 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon	&_type;
	public:
		HumanA(std::string name, Weapon &type);
		void	attack();
};

#endif
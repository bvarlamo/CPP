/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:35:39 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 14:56:00 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon	*_type;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &type);
};

#endif
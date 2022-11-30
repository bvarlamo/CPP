/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:25:23 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 14:34:23 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		std::string const &	getType();
		void	setType(std::string type);
		
		Weapon(std::string wtype);
		
};

#endif
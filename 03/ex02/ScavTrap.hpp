/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:23:09 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:24:04 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& obj);
		ScavTrap(const ScavTrap& src);
		

	void	attack(const std::string& target);
	void	guardGate();

};

#endif
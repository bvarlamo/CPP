/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:16:03 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:23:40 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		int			_initHP;
		

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap( void );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printHitPoints();
		
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		int			getInitHP() const;
		
};

#endif
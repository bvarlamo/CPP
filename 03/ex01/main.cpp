/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:16:55 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:27:01 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void )
{

	ScavTrap	hero1("Bobo");

	hero1.attack("hero");
	hero1.takeDamage(2);
	hero1.beRepaired(2);
	hero1.attack("hero");
	hero1.takeDamage(5);
	hero1.guardGate();

	ClapTrap	hero("Boriss");

	hero.attack("hero");
	hero.takeDamage(2);
	hero.printHitPoints();
	hero.beRepaired(2);
	hero.attack("hero");
	hero.printHitPoints();
	hero.takeDamage(5);

	return (0);
}
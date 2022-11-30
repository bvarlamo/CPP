/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:16:55 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:29:28 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void )
{
	ClapTrap	hero("Boriss");

	hero.attack("hero");
	hero.takeDamage(2);
	hero.beRepaired(2);
	hero.attack("hero");
	hero.takeDamage(5);

	return (0);
}
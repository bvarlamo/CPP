/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:16:55 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:31:22 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main ( void )
{

{
        std::cout << "*** Basic Tests and Gate Guard ***" << std::endl;
        ClapTrap    clapTrap("Clappy");
        FragTrap    fragTrap;

        fragTrap.attack("Jack");
        clapTrap.attack("Sereena");
        fragTrap.highFivesGuys();
        fragTrap.takeDamage(30);
        fragTrap.beRepaired(10);
        fragTrap.takeDamage(50);
        fragTrap.takeDamage(40);
        fragTrap.takeDamage(10);
        fragTrap.beRepaired(1);
        fragTrap.attack("Sereena");
        clapTrap.beRepaired(5);
    }
    {
        std::cout << std::endl << "*** Copying ***" << std::endl;
        FragTrap    fragTrap;

        fragTrap.takeDamage(30);
        FragTrap    frag2 ("FragTrapCopy");
        frag2 = fragTrap;
        frag2.attack("Sereena");
        fragTrap.takeDamage(30);
        FragTrap    frag3(fragTrap);
    }
    {

        std::cout << std::endl << "*** Repair and attack limits ***" << std::endl;
        FragTrap    fragTrap;

        for (int i = 0; i < 101; i++)
            fragTrap.attack("Jack");
        fragTrap.beRepaired(10);
        fragTrap.attack("Jack");
        fragTrap.takeDamage(100);
        fragTrap.takeDamage(100);
    }
    {
        std::cout << std::endl << "*** FragTrap ***" << std::endl;
        FragTrap    fragTrap;
        ScavTrap    scavTrap;

        scavTrap.attack("Jack");
        scavTrap.guardGate();
        fragTrap.attack("Jack");
        fragTrap.highFivesGuys();
        fragTrap.takeDamage(50);
        fragTrap.beRepaired(30);
        fragTrap.takeDamage(80);
    }
    return (0);

	
	return (0);
}
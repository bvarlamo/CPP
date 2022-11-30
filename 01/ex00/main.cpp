/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:10:49 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 12:55:41 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
	Zombie*	bob = new Zombie("bob");
	return (bob);
}

void	randomChump( std::string name)
{
	Zombie	jim("jim");
	jim.announce();
}

int	main( void )
{
	Zombie*	bob = newZombie("bob");
	randomChump("jim");

	delete bob;
	
	return (0);
}
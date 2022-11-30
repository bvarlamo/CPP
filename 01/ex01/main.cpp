/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:10:49 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 13:38:54 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( int N, std::string name)
{
	Zombie*	hord = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		hord[i].naming(name);
		hord[i].announce();
	}
	return (hord);
}

int	main( void )
{
	Zombie*	bob = newZombie(1,"bob");

	delete [] bob;
	
	return (0);
}
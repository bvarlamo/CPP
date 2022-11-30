/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:04:17 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 17:49:13 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "wrong argument count" << std::endl;
		return (1);
	}

	Harl	harl;
	harl.complain(argv[1]);

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:45:23 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/03 15:18:33 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; argv[i]; i++)
	{
		for (int y = 0; argv[i][y]; y++)
			std::cout << (char) toupper(argv[i][y]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
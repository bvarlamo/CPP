/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:56 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/08 10:24:46 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "wrong argument count" << std::endl;
		return (1);
	}
	
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string 	str;
	std::string		file;
	std::string		s1;
	std::string		s2;
	size_t			i;
	size_t			y;

	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	infile.open(file);
	if (infile.fail())
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}

	outfile.open(file + ".replace");

	y = 0;
	while (getline(infile, str))
	{
		if (y > 0)
			outfile << std::endl;
		i = str.find(s1);
		while (i != std::string::npos)
		{
			str.erase(i, s1.size());
			str.insert(i, s2);
			i = str.find(s1, i + s2.size());
		}
		outfile << str;
		y++;
	}
	return (0);
}
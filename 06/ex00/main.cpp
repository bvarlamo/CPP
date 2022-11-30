/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:54:19 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/14 18:14:09 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	checkChar(std::string str)
{
	if ((str.find_first_of("0123456789") == std::string::npos) && str.length() == 1)
		return (true);
	else 
		return (false);
}

bool	checkInt(std::string str)
{
	if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
		return (false);
	if ((str[0] == '-' || str[0] == '+') && str.length() == 1)
		return (false);
	size_t	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	checkFloat(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
		return (false);
	if ((str[0] == '-' || str[0] == '+') && str.length() == 1)
		return (false);
	bool	point = false;
	size_t	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (i <str.length())
	{
		if (!isdigit(str[i]))
		{
			if (i == str.length() - 1 && str[i] == 'f')
				return (true);
			if (str[i] == '.')
			{
				if (point)
					return (false);
				point = true;
			}
			else
				return (false);
		}
		i++;
	}
	return (false);
}

bool	checkDouble(std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
		return (false);
	if ((str[0] == '-' || str[0] == '+') && str.length() == 1)
		return (false);
	bool	point = false;
	size_t	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (i <str.length())
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				if (point)
					return (false);
				point = true;
			}
			else
				return (false);
		}
		i++;
	}
	return (true);
}

void	toChar(std::string str){

	char	c = str[0];
	if ((static_cast<int>(c) < 32 && static_cast<int>(c) > 0) || static_cast<int> (c) == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (isprint(static_cast<int>(c)))
		std::cout << "char: \'" << static_cast<char> (c) << "\'"<< std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	toInt(std::string str)
{
	std::istringstream	n(str);
	int					num;
	if (!(n >> num))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << "imposible" << std::endl;
		std::cout << "float: " << "imposible" << std::endl;
		std::cout << "double: " << "imposible" << std::endl;
		return ;
	}
	if ((num < 32 && num > 0) || num == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (isprint(num))
		std::cout << "char: \'" << static_cast<char> (num) << "\'"<< std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) / static_cast<float>(1) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	toFloat(std::string str)
{
	float	num = atof(str.c_str());

	if ((num < 32. && num > 0.) || num == 127.)
		std::cout << "char: Non displayable" << std::endl;
	else if (isprint(num))
		std::cout << "char: \'" << static_cast<char> (num) << "\'"<< std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (num > INT_MAX || num < INT_MIN || str == "nanf")
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << "float: " << num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	toDouble(std::string str)
{
	std::istringstream	n(str);
	double					num;
	
	if (!(n >> num))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << "imposible" << std::endl;
		std::cout << "float: " << "imposible" << std::endl;
		std::cout << "double: " << "imposible" << std::endl;
		return ;
	}
	if ((num < 32 && num > 0) || num == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (isprint(num))
		std::cout << "char: \'" << static_cast<char> (num) << "\'"<< std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (num > INT_MAX || num < INT_MIN || str == "nan")
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
}

int		main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Incorect argument count" << std::endl;
		return (1);
	}

	std::string str = argv[1];
	if (checkChar(str))
		toChar(str);
	else if (checkInt(str))
		toInt(str);
	else if (checkFloat(str))
		toFloat(str);
	else if (checkDouble(str))
		toDouble(str);
	else
		std::cout << "Incorect input" << std::endl;
	
	return (0);
}
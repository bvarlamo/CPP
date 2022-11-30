/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:11:19 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 10:50:30 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		void	announce( void );

		Zombie(std::string name);
		~Zombie( void );
};
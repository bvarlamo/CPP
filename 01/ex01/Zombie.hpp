/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:11:19 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 10:51:43 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		void	announce( void );
		void	naming(std::string name);

		Zombie( void );
		~Zombie( void );
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:58:34 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:23:58 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
	
	public:

		FragTrap();
		FragTrap(std::string name);
		~FragTrap( void );
		FragTrap& operator=(const FragTrap& src);
		FragTrap(const FragTrap& src);

		void	highFivesGuys( void );

};

#endif
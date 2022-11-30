/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:04:14 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/06 17:10:45 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define	HARL_HPP
#include <iostream>

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	void	complain (std::string level);
};

#endif
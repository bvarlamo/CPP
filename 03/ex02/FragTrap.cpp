/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:59:18 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:24:11 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){

	this->_name = "bobo2";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_initHP = 100;
	std::cout << this->_name << " Frag constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return ;
}

FragTrap::FragTrap(std::string name){

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_initHP = 100;
	std::cout << name << " Frag constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return ;
}

FragTrap::~FragTrap( void ){

	std::cout << this->_name << " FragTrap destructor called" << std::endl;
	
	return ;
}

FragTrap::FragTrap(const FragTrap& src){

	std::cout << this->_name << " Copy constructor called" << std::endl;
	*this = src;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;

	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {

	if (this != &src)
	{
		std::cout << this->_name << " = operator called" << std::endl;
		std::string local;
		local = src.getName();
		this->_name = local + "copy";
		this->_attackDamage = src.getAttackDamage();
		this->_energyPoints = src.getEnergyPoints();
		this->_hitPoints = src.getHitPoints();
		this->_initHP = src.getInitHP();
	}
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;

	return (*this);
}

void	FragTrap::highFivesGuys( void ){

	std::cout << this->_name << " Positive high five request" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;

	return ;
}

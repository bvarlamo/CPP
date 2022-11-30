/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:22:52 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:25:58 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){

	this->_name = "bobo1";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initHP = 100;
	std::cout << this->_name << " ScavTrap constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
}

ScavTrap::ScavTrap(std::string name){

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initHP = 100;
	std::cout << name << " ScavTrap constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
}

ScavTrap::~ScavTrap(){
	
	std::cout << this->_name << " ScavTrap destructor called" << std::endl;
	
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& src){

	std::cout << this->_name << " Copy constructor called" << std::endl;
	*this = src;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;

	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src){

	if (this != &src)
	{
		std::cout << this->_name << " = operator called" << std::endl;
		this->_name = src.getName();
		this->_attackDamage = src.getAttackDamage();
		this->_energyPoints = src.getEnergyPoints();
		this->_hitPoints = src.getHitPoints();
		this->_initHP = src.getInitHP();
	}
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return (*this);
}

void	ScavTrap::attack(const std::string& target){

	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " No energy points left" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " No hit points left" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return ;
}

void	ScavTrap::guardGate(){

	std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;

	return ;
}

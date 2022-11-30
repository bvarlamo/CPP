/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:15:59 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/10 13:23:47 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

	this->_name = "bobo";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_initHP = 10;
	std::cout << this->_name << " constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name){

	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_initHP = 10;
	std::cout << this->_name << " constructor called" << std::endl;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& src){

	std::cout << this->_name << " Copy constructor called" << std::endl;
	*this = src;

	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ){

	std::cout << this->_name << " Destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src){

	if (this != &src)
	{
		std::cout << this->_name << " = operator called" << std::endl;
		this->_name = src.getName();
		this->_attackDamage = src.getAttackDamage();
		this->_energyPoints = src.getEnergyPoints();
		this->_hitPoints = src.getHitPoints();
		this->_initHP = src.getInitHP();;
	}
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){

	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " No energy points left" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0)
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

void	ClapTrap::takeDamage(unsigned int amount){

	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " Hitpoints are 0, dead" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	std::cout << this->_name << " taken damage of " << amount << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " No energy points left" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " No hit points left" << std::endl;
		std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
		return ;
	}
	std::cout << this->_name << " repairs itself, and it gets " << amount << " hit points back" << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_initHP)
		this->_hitPoints = this->_initHP;
	std::cout << "EP: " << this->_energyPoints << "  HP: " << this->_hitPoints << std::endl;
}

void	ClapTrap::printHitPoints(){

	std::cout << this->_name << "'s hitpoints are: " << this->_hitPoints << std::endl;
}

std::string	ClapTrap::getName() const {

	return (this->_name);
}

int			ClapTrap::getHitPoints() const {

	return (this->_hitPoints);
}
int			ClapTrap::getEnergyPoints() const {

	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage() const {

	return (this->_attackDamage);
}

int			ClapTrap::getInitHP() const{

	return (this->_initHP);
}
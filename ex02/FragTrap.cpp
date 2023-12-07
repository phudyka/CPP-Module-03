/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:19:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 17:19:44 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << Name << " is here to High Five!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(Name)
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " says goodbye with a big explosion!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " requests a high five from everyone!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	std::cout << rhs << std::endl;
	return (*this);
}
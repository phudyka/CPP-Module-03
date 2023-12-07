/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:25:14 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 16:25:29 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << Name << " is here to guard the gate!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " bids farewell, duty as gatekeeper is over!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing "
                  << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else if (HitPoints <= 0)
        std::cout << "ScavTrap " << Name << " can't attack, no hit points left!" << std::endl;
    else
        std::cout << "ScavTrap " << Name << " has no energy left to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	std::cout << rhs << std::endl;
	return (*this);
}
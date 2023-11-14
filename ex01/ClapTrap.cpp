/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:49 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/14 11:20:27 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << Name << " is alive and ready for action!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " says goodbye, I'm out!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "
                  << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else if (HitPoints <= 0)
        std::cout << "ClapTrap " << Name << " can't attack, no hit points left!" << std::endl;
    else
        std::cout << "ClapTrap " << Name << " has no energy left to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        if (amount > HitPoints)
            HitPoints = 0;
        else
            HitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << Name << " is already out of hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " is being repaired, gaining " << amount << " hit points!" << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    }
    else if (HitPoints <= 0)
        std::cout << "ClapTrap " << Name << " can't be repaired, no hit points left!" << std::endl;
    else
        std::cout << "ClapTrap " << Name << " has no energy left to repair!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap)
{
    out << "Name: " << clapTrap.Name << "\tHitPoints: " << clapTrap.HitPoints
        << "\tEnergyPoints: " << clapTrap.EnergyPoints << "\tAttackDamage: " << clapTrap.AttackDamage;
    return out;
}

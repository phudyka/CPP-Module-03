/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 14:43:32 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap(ORANGE "CL4P" RESET);
    std::cout << std::endl;
    std::cout << clap << std::endl;
    clap.attack(RED "target" RESET);
    clap.takeDamage(3);
    clap.beRepaired(2);
    std::cout << clap << std::endl;

    ScavTrap scav(BLUE "5CAV" RESET);
    std::cout << scav << std::endl;
    scav.guardGate();
    std::cout << std::endl;

    return (0);
}
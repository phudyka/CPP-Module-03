/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 17:22:45 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp" 

int main(void)
{
	ClapTrap clap( ORANGE "CL4P" RESET);
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

    FragTrap frag(YELLOW "K-B00M" RESET);
    std::cout << frag << std::endl;
    frag.highFivesGuys();
    frag.attack(RED "target 2" RESET);
    frag.takeDamage(20);
    frag.beRepaired(10);
    std::cout << frag << std::endl;
    return (0);
}
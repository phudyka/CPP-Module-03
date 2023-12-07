/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 16:31:07 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap(ORANGE "CL4P" RESET);

	std::cout << std::endl;
    clap.attack(RED "target" RESET);
    clap.takeDamage(3);
    clap.beRepaired(2);
	std::cout << std::endl;
    clap.attack(RED "Another Target" RESET);
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;
    clap.attack(RED "And Another One" RESET);
    clap.takeDamage(12);
    clap.beRepaired(4); 
	std::cout << std::endl;

    return (0);
}







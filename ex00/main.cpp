/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 16:17:53 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap(ORANGE "Z0B" RESET);

	std::cout << std::endl;
    clap.attack(RED "target" RESET);
    clap.takeDamage(3);
    clap.beRepaired(2);
	std::cout << std::endl;
    clap.attack(RED "DJ Khaled" RESET);
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;
    clap.attack(RED "Another One" RESET);
    clap.takeDamage(12);
    clap.beRepaired(4); 
	std::cout << std::endl;

    return (0);
}







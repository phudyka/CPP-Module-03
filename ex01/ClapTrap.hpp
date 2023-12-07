/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:56 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 16:42:35 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

# define RED	"\033[1;31m"
# define BLUE	"\033[1;34m"
# define ORANGE	"\033[1;38;5;208m"
# define RESET	"\033[0m"

class	ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;
	public:
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		virtual ~ClapTrap();
		std::string getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream	&operator<<( std::ostream &os, const ClapTrap &clap);


#endif

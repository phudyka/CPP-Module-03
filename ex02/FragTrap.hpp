/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:17:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/07 16:59:55 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	public:
		FragTrap(const std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();
		FragTrap &operator=(const FragTrap &other);
	
    void	highFivesGuys(void);
};

#endif

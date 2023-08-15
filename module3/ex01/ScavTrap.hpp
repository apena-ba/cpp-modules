/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:25:36 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/04 23:30:39 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(ScavTrap &to_copy);
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        
        ScavTrap &operator=(ScavTrap &to_equal);
        
        void guardGate();
};

#endif
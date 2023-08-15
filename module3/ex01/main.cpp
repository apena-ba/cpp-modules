/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:13:35 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/16 20:56:34 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void){
    ScavTrap trap("Ramon");

    trap.attack("a fly");
    trap.takeDamage(1);
    trap.beRepaired(1);
    trap.guardGate();
    return(0);
}

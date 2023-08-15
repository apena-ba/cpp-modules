/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:13:35 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/17 21:22:56 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void){
    FragTrap trap("Ramon");

    trap.attack("a fly");
    trap.takeDamage(1);
    trap.beRepaired(1);
    trap.highFivesGuys();
    return(0);
}

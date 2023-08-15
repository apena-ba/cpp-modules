/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:13:35 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/16 19:17:22 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap trap("Pepe");

    trap.attack("a fly");
    trap.takeDamage(1);
    trap.beRepaired(1);
    return(0);
}

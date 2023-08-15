/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:26:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/10 18:08:29 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>
// CamFeed::CamFeed(ofVideoGrabber& cam) : cam(cam) {}

HumanA::HumanA(std::string name_toget, Weapon &weapon_toget) : _name(name_toget), _weapon(weapon_toget) {
}

HumanA::~HumanA(void){
}

void HumanA::attack(void){
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

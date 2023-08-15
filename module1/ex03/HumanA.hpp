/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:22:22 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/10 18:05:33 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private:
        std::string _name;
        Weapon      &_weapon;
    public:
        HumanA(std::string name_toget, Weapon &weapon_toget);
        ~HumanA();
        void attack(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:20:04 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/10 17:50:43 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanB(std::string name_toget);
        ~HumanB();
        void setWeapon(Weapon &to_set);
        void attack(void);
};

#endif
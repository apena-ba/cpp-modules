/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:13:22 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/11 20:38:47 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*func_pnt[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i;

    for(i = 0; i < 4; i++){
        if(level == lvl[i]){
            (this->*func_pnt[i])();
            break;
        }
    }
    if(i == 4)
        std::cout << "Harl achieved a level of complain beyond his possibilities" << std::endl;
}

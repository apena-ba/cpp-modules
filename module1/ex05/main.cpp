/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:30:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/11 20:36:09 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    Harl complainer;

    complainer.complain("DEBUG");
    std::cout << std::endl;
    complainer.complain("INFO");
    std::cout << std::endl;
    complainer.complain("WARNING");
    std::cout << std::endl;
    complainer.complain("ERROR");
}

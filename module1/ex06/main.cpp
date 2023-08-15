/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:30:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/01 20:20:00 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
    Harl complainer;

    if (argc != 2){
        std::cout << "Error with parameters" << std::endl;
        return(1);
    }
    complainer.complain(argv[1]);
}

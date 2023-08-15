/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:25:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/01 19:36:55 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void ft_void(void)
// {
//     system("leaks -q zombieExperianceV2");
// }

int	main(void)
{
	Zombie	*horde;

    //atexit(ft_void);
	horde = zombieHorde(5, "Ramon");
	std::cout << "Zombie horde has been created" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << "Zombie number " << i << " anounces himself:" << std::endl;
		horde[i].announce();
	}
    delete [] horde;
	std::cout << "Everything clear, see you soon!" << std::endl;
}

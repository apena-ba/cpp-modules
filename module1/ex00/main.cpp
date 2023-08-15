/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:26:14 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/01 19:33:13 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void ft_void(void)
// {
//     system("leaks -q zombieExperiance");
// }

int	main(void)
{
	Zombie	*ramon;

    //atexit(ft_void);
	ramon = newZombie("Ramon");
	std::cout << "Zombie called Ramon has been created" << std::endl;
	ramon->announce();
	std::cout << "Zombie called Ramon has announced himself" << std::endl;
	randomChump("Jose Antonio");
	std::cout << "Random zombie called Jose Antonio has been created and has announced himself" << std::endl;
    delete ramon;
	std::cout << "Everything clear, see you soon!" << std::endl;
}

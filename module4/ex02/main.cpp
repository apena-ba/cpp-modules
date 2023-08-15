/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:07:13 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/08 21:05:15 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

//void ft(void){system("leaks -q animalExperianceV3");}

int main()
{
    //atexit(ft);
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    std::cout << std::endl << " DELETES " << std::endl;
    delete j;
    delete i;
    std::cout << std::endl << " END " << std::endl;

    Dog *r = new Dog();
    Dog *a = new Dog(*r);

    a->makeSound();

    delete r;
    delete a;

    return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:46 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/05 14:18:41 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 750

void ft_leaks(void)
{
	system("leaks -q arrayExperiance");
}

int main(void)
{
	atexit(ft_leaks);
    std::cout << "yes" << std::endl;
    Array<int> numbers(MAX_VAL);
    Array<int> numbers_2;
    numbers_2 = numbers;

    std::cout << "no" << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        std::cout << "here" << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "here" << std::endl;
    }
    std::cout << "here" << std::endl;
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	std::cout << "3 int, array[2] = 42:\n";
	Array<int> array(3);
	array[2] = 42;
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << "\n";
    
	std::cout << "3 string, tab[1] = \"hola\":\n";
	Array<std::string> tab(3);
	tab[1] = "hola";
	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << ".";
	std::cout << "\n";
    return 0;
}

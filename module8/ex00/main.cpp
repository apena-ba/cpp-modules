/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:46 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/05 15:22:30 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }

    try
    {
        std::cout << "Vector: " << *easyfind(v, 1) << std::endl;
        std::cout << "List: " << *easyfind(l, 5) << std::endl;
        std::cout << "Vector: " << *easyfind(v, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

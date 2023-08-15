/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:46 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/04 17:20:33 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int sumOne(int x){
	return x + 1;
}

int	main(void){
    int array[2] = {1, 3};

    ::iter(array, 2, sumOne);

    std::cout << array[0] << ", " << array[1] << std::endl;
    return(0);
}

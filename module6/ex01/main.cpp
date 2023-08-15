/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:28:59 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/30 19:56:14 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return(reinterpret_cast<Data*>(raw));
}

int main(void){

    Data *data = new Data; // Data

	uintptr_t raw = serialize(data); // Raw from Data

	Data *data2 = deserialize(raw); // Data from raw

    // Test everything is the same
	std::cout << "Data: " << data << std::endl;
	std::cout << "Data name: " << data->getName() << std::endl;

	std::cout << "raw: " << raw << std::endl;

	std::cout << "Data 2: " << data2 << std::endl;
	std::cout << "Data 2 name: " << data2->getName() << std::endl;
	
	delete data;
	return 0;
}

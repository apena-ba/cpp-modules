/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:28:59 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/04 16:49:37 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate(void){
	std::srand(std::time(nullptr));

	int num = (std::rand() % 3) + 1;

	if(num == 1)
		return (new A);
	else if(num == 2)
		return (new B);
	else
		return (new C);
}

void identify(Base *p){
	if(dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

int main(void){

    Base *random = generate();
	
	identify(random);
	
	delete random;
	return 0;
}

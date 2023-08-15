/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:35:59 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/04 19:42:06 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of str = " << &str << std::endl;
    std::cout << "Address held by stringPTR = " << stringPTR << std::endl;
    std::cout << "Address held by stringREF = " << &stringREF << std::endl;

    std::cout << "Value of str = " << str << std::endl;
    std::cout << "Value pointed to by stringPTR = " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF = " << stringREF << std::endl;
}

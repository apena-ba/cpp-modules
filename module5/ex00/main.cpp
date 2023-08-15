/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:14:49 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/17 18:57:47 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void thirdCase(void){
    try{
        std::cout << "Create Bureaucrat out of range" << std::endl;
        Bureaucrat three("THREE", -151);
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
}

void secondCase(Bureaucrat &two){
    try{
        std::cout << "Decrement two" << std::endl;
        two.decrementGrade();
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
}

void firstCase(Bureaucrat &one){
    try{
        std::cout << "Increment one" << std::endl;
        one.incrementGrade();
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
}

int main(void){
    Bureaucrat one("FIRST", 1);
    Bureaucrat two("LAST", 150);
    firstCase(one);
    secondCase(two);
    thirdCase();
    Bureaucrat three;
    std::cout << three << std::endl;
}

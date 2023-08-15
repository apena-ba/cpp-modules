/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:14:49 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:27:10 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
    Bureaucrat one("FIRST", 1);
    Bureaucrat two("LAST", 150);
    ShrubberyCreationForm tree("arbolillo");
    RobotomyRequestForm robot("el robot");
    PresidentialPardonForm constitution("documento oficial del estado");
    try{
        one.signForm(tree);
        two.signForm(tree);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        one.executeForm(tree);
        two.executeForm(tree);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        one.signForm(robot);
        two.signForm(robot);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << std::endl << std::endl <<  "HERE" << std::endl << std::endl;
        one.executeForm(robot);
        two.executeForm(robot);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        one.signForm(constitution);
        two.signForm(constitution);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << std::endl << std::endl <<  "HERE" << std::endl << std::endl;
        one.executeForm(constitution);
        two.executeForm(constitution);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << tree << std::endl;
    std::cout << robot << std::endl;
    std::cout << constitution << std::endl;
}

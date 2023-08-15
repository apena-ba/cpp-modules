/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:25:50 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:28:33 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// CONSTRUCTORS AND DESTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm() : 
    AForm("ShrubberyCreationForm", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &to_copy) :
    AForm(to_copy.getName(), to_copy.getGradeToSign(), to_copy.getGradeToExecute()){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

// METHODS

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    AForm::checkExecute(executor);
    this->writeTree();
}

void ShrubberyCreationForm::writeTree(void) const{
    std::string name(this->_target);
    name.append("_shrubbery");
    std::ofstream of(name);
    if(!of.is_open()){
        std::cout << "Could not open file" << std::endl;
        return;
    }
    of << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⢀⡀⠀⠀⢀⣻⣿⣧⣴⡿⢿⣦⣀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⣠⣦⣾⣿⣿⣷⣶⣶⡿⠿⣟⠛⠶⠾⢻⡾⢿⣶⢾⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⢰⣾⣿⡿⠿⠉⠀⠉⠳⠉⠉⠀⠐⠂⢀⠐⠀⠀⠈⠁⠒⠋⡽⣿⡗⠀⠀⠀⠀⠰⠀⠀⠀\n⠀⠀⠀⠀⠀⠘⠿⣿⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⡀⠀⡀⠀⣀⠰⣎⣿⣿⣄⡀⠀⠀⠀⠀⠀\n⠀⡀⠀⠀⠀⢠⣾⡿⢤⡤⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠃⠠⢤⠀⠀⠼⠛⣿⣇⢀⡀⠀⠀⠀\n⠀⠇⢀⣀⣶⣾⣿⠅⠈⠉⠁⠤⠀⠠⠀⠀⠀⡀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣷⣦⠀⠀\n⠀⠀⠈⢿⣿⣿⡟⠀⠆⠈⠁⣀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠂⠀⠀⠀⡀⠾⢹⡏⠁⠀⠀\n⠀⠀⠀⠀⢀⣿⣿⠇⠀⠐⠂⠐⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⣼⣿⡇⠀⠀⠀\n⠀⠀⠘⣿⣿⣿⣱⡾⠃⠀⢂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⠀⠀⠀⠀⠀⠃⡀⠁⣡⣾⣇⠀⠀⠀\n⠀⠀⢸⣿⣿⣿⣉⡡⠶⠁⠼⠁⠀⠠⠄⠀⠀⠀⠀⢀⠀⠀⠀⠀⠄⠁⠄⠁⠄⡀⠀⢨⣹⡿⠿⠀⠀⠀\n⠀⠀⠀⠙⠻⣿⣿⣧⣰⣷⣶⣄⠁⠴⠆⢀⡐⠒⠐⠀⠀⠀⠀⠀⠀⡀⠂⠀⠀⡀⠒⣾⡟⠓⠀⠀⠀⠀\n⠀⠀⠀⠀⠈⢻⡟⢻⣿⣿⣿⣿⡓⣤⣄⠈⠱⣆⠀⣀⣲⣤⣷⣤⣀⣽⣓⣤⣠⣯⣾⡿⠋⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠁⠀⢸⣿⣿⡿⢷⣶⣾⣿⣶⣿⣶⣿⣿⢾⣿⠿⠋⠉⠙⣿⠿⠃⠀⠀⠀⠀⠐⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⢰⠀⠈⠻⠟⠀⠈⠙⠿⢿⣿⡏⠛⣿⣿⢺⣿⠀⠀⠀⠀⠀⠀⡄⠀⢠⠀⠀⢁⠀⠀⠀\n⠀⠀⠀⠈⡀⠀⡼⠀⠀⢀⠀⠀⠀⠀⠀⢸⣿⡿⠀⣿⠁⠀⣿⠀⠀⠀⠀⠀⢠⠇⠀⠸⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠁⠀⠇⢀⠀⠘⠀⢀⠀⠀⣾⡗⣿⣿⣹⠀⣦⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⢀⣰⣆⣰⣷⣾⣷⣶⣆⡀⡇⠀⣿⣿⣼⣿⣿⡇⣽⠀⣿⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⣾⣿⣿⠿⣛⣹⡿⣿⡿⠃⠁⠀⠉⢽⣿⣿⣭⣹⡇⢰⣿⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⢀⣽⣿⠋⠁⠀⠀⢹⣿⢇⠀⠀⠀⠀⢼⣿⡷⠿⡏⣷⠘⣿⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠸⢿⢿⣿⠄⡀⠀⢠⣼⣯⣾⣷⣶⣄⠀⣸⡟⢻⠃⣿⠛⢀⣿⢸⠀⠀⠀⠀⠀⠇⡀⢠⠀⠀⢸⠀⠀⠀\n⠀⠀⠈⢉⣿⣿⣼⡿⠋⠉⢹⣿⣿⣟⣛⣿⠇⠈⣿⠻⡇⢸⣿⠈⠀⠀⠀⣠⣶⣾⣿⣶⣦⣰⣆⣀⠀⠀\n⠀⠀⠀⠀⠙⠿⠉⠀⠀⠀⠀⠈⠉⠹⣯⣿⣾⣇⣿⡇⣿⢸⣿⢀⠀⠀⠸⢿⣿⠿⠿⢏⣹⠿⢿⣿⣦⡀\n⠀⠀⠀⠀⠀⠀⢸⠀⠀⡆⠀⠀⠀⠀⠈⢹⣿⡿⣯⡴⠅⢸⣿⠘⠀⠀⠀⢸⣿⣤⡄⠀⣀⠐⢻⣿⣄⡅\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⠀⠀⠀⠀⠀⢻⣿⣧⡋⣷⠂⣽⣿⣀⣀⣶⣴⢿⣿⣿⣆⠀⠈⢳⣾⣿⣿⡇\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣟⠢⠷⢉⣿⣛⣻⣿⣾⠿⠉⠉⢿⣿⣶⣼⡟⠁⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡟⣿⣮⣿⣡⣿⣿⡟⠉⠉⠀⠀⠀⠈⠉⠹⠏⠁⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢽⣿⡿⣿⡂⠻⣿⣿⠉⠀⠀⠀⠀⢰⠀⠀⠀⠀⠀⢠⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⢀⣤⣾⣿⣇⠿⣏⡑⣿⣿⣦⠀⠀⠄⠀⠘⡦⠀⢰⠂⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⢦⣸⣿⡓⣿⡟⣷⡘⢷⣌⠘⢻⣶⠀⠀⠀⠀⠃⠀⠘⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⣈⣤⣄⣸⣿⣏⣿⣿⡿⣯⣷⡈⣎⠳⣶⡹⠾⢟⣤⣠⣄⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⢠⣴⡿⠿⢿⣟⠻⣯⣿⣿⣿⣿⣷⣟⣩⣿⡿⢿⣟⣾⣿⣛⣽⡷⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠘⠃⠀⠙⡟⠀⠛⡁⠀⠛⡟⠁⠛⡋⠁⠀⠀⠛⣋⠈⢛⠋⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
}

// OVERLOADING

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &to_equal){
    AForm::operator=(to_equal);
    return(*this);
}

std::ostream &operator<<(std::ostream &ost, ShrubberyCreationForm &to_op){
    return(ost << to_op.getName() << ", to exec: " <<
        to_op.getGradeToExecute() << ", to sign: " <<
        to_op.getGradeToSign() << ", sign: " <<
        to_op.getSign() << std::endl);
}

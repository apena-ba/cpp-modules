/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:14:07 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/04 19:05:41 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void ft_void(void)
// {
//     system("leaks -q phonebook");
// }

int main(void){
    std::string command;

    //atexit(ft_void);
    PhoneBook phone = PhoneBook();
    while(1){
        std::cin.clear();
        std::clearerr(stdin);
        std::cout << "\nType a command\n";
        std::getline(std::cin, command);
        if(command == "ADD")
            phone.AddContact();
        else if(command == "SEARCH")
            phone.SearchContact();
        else if(command == "EXIT"){
            phone.ExitPhonebook();
            break;
        }
        else if(command == "exit" || command == "add" || command == "search")
            std::cout << "\nUppercase please\n";
        else if(!command.size())
            std::cout << "\nError with input\n";
        else if(command == "MAX")
            phone.GetMax();
        else
            std::cout << "\nUnknown command\n";
    }
    return(0);
}

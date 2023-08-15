/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:49:16 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/02 15:04:39 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int error_handler(std::string error){
    std::cerr << error << std::endl;
    return(1);
}

std::string read_and_replace(std::ifstream &ifs, char **argv){
    std::string buff;
    std::string to_check = argv[2];
    std::string to_put = argv[3];

    // READ ALL FILE AND LOOP TO CHANGE OCURRENCES
    std::getline(ifs, buff, '\0');
    for(int i = 0; buff[i]; i++){
        if(buff[i] == to_check[0] && buff.substr(i, to_check.size()) == to_check){
            buff.erase(i, to_check.size());
            buff.insert(i, to_put);
            i += to_check.size();
        }
    }
    return (buff);
}

int main(int argc, char **argv){
    // ARGUMENTS VALIDATION
    if(argc != 4){
        std::cerr << "Error with parameters" << std::endl;
        return(1);
    }

    // FILES OPNENING
    std::string     name;
    name = argv[1];
    std::ifstream   ifs(name);
    if(!ifs.is_open())
        return(error_handler("Error when opening file provided"));
    std::ofstream   ofs(name + ".replace");
    if(!ofs.is_open())
        return(error_handler("Error when creating .replace file"));

    // READING AND REPLACING
    ofs << read_and_replace(ifs, argv);
    return(0);
}

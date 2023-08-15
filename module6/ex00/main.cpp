/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:28:59 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/29 22:13:10 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv){
    if(argc != 2){
        std::cerr << "Wrong number of arguments" << std::endl;
        std::cerr << "Usage: ./converter [data to convert]" << std::endl;
        return(1);
    }

    try{
        Converter conv(argv[1]);
        conv.convert();
        conv.printConv();
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
        return(1);
    }
    return(0);
}

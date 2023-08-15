/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:32:36 by apena-ba          #+#    #+#             */
/*   Updated: 2022/11/16 18:57:37 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char ft_capitalizer(char c){
    if(c > 96 && c < 123)
        c -= 32;
    return(c);
}

int main(int argc, char **argv){
    if(argc < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return(1);
    }
    else{
        for(int i = 1; i < argc; i++){
            for(int j = 0; argv[i][j] != '\0'; j++)
                std::cout << ft_capitalizer(argv[i][j]);
        }
    }
    std::cout << '\n';
}

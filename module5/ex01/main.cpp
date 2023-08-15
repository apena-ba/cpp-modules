/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:14:49 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/17 19:36:16 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void){
    Bureaucrat one("FIRST", 1);
    Bureaucrat two("LAST", 150);
    Form paper("Doc", 140, 140);
    try{
        one.signForm(paper);
        two.signForm(paper);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << paper << std::endl;
}

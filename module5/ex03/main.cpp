/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:14:49 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/07 19:44:02 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void leakCheck(void) {
	system("leaks -q bureaucratExperianceV4");
}

int	main(void) {
	atexit(leakCheck);
	
	Bureaucrat	ImportantBuro("Paco", 3);
	Intern		UnimportantJake;
	AForm		*intForm;

	intForm = UnimportantJake.makeForm("PresidentialpardonfOrm", "I, myself");

	std::cout << *intForm << std::endl;
	ImportantBuro.signForm(*intForm);
	ImportantBuro.executeForm(*intForm);

	delete intForm;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:45:12 by apena-ba          #+#    #+#             */
/*   Updated: 2022/12/18 22:20:01 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(std::string name, std::string lastname, std::string nickname,
		std::string number, std::string secret)
{
	this->_name = name;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_number = number;
	this->_secret = secret;
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::GetIndex(int index)
{
	this->_index = index;
}

void	IndDisplay(std::string to_display)
{
	std::string spaces = std::string("        ");
	if (to_display.size() > 8)
		std::cout << " " << to_display.substr(0, 8) << ".|";
	else
		std::cout << " " << to_display << spaces.substr(0, 9
				- to_display.size()) << "|";
}

void Contact::DisplayInformation(void)
{
	std::cout << "    " << this->_index << "    |";
	IndDisplay(this->_name);
	IndDisplay(this->_lastname);
	IndDisplay(this->_nickname);
	std::cout << std::endl;
}

void Contact::DisplaySelected(void)
{
	std::cout << std::endl;
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "Last name: " << this->_lastname << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Number: " << this->_number << std::endl;
    std::cout << "Secret: " << this->_secret << std::endl;
}

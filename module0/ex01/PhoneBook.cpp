/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:27:20 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/04 18:39:01 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::GetMax(void)
{
	std::string count = std::string();
	for (int i = 0; i < 8; i++)
	{
		this->_contacts[i] = Contact(std::to_string(i), "a", "a", "a", "a");
	}
	this->_size = 8;
	this->RefreshIndex();
}

void PhoneBook::DisplayContacts(void)
{
	std::cout << "  Index  |   Name   | LastName | Nick Name" << std::endl;
	for (int i = 0; i < this->_size; i++)
		this->_contacts[i].DisplayInformation();
}

void PhoneBook::RefreshIndex(void)
{
	for (int i = 0; i < this->_size; i++)
		this->_contacts[i].GetIndex(i);
}

void PhoneBook::AddContact(void)
{
	std::string field_name;
	std::string field_lastname;
	std::string field_nickname;
	std::string field_number;
	std::string field_secret;

	std::cout << "Write the name of the contact to add: \n";
	std::getline(std::cin, field_name);
	std::cout << "Write the last name of the contact to add: \n";
	std::getline(std::cin, field_lastname);
	std::cout << "Write the nickname of the contact to add: \n";
	std::getline(std::cin, field_nickname);
	std::cout << "Write the number of the contact to add: \n";
	std::getline(std::cin, field_number);
	std::cout << "Write the darkest secret of the contact to add: \n";
	std::getline(std::cin, field_secret);
	if (!field_name.size() || !field_lastname.size() || !field_nickname.size()
		|| !field_number.size() || !field_secret.size())
	{
		std::cout << "Something went wrong with the data" << std::endl;
		return ;
	}
	if (this->_size < 8)
		this->_size++;
	for (int i = this->_size - 1; i > 0; i--)
		this->_contacts[i] = this->_contacts[i - 1];
	this->_contacts[0] = Contact(field_name, field_lastname, field_nickname,
			field_number, field_secret);
	this->RefreshIndex();
}

int	GetToSearch(std::string to_scan, int size)
{
	if (to_scan.size() != 1)
	{
		std::cout << "Wrong size -> ";
		return (-1);
	}
	else if (to_scan[0] < 48 || to_scan[0] > 57)
	{
		std::cout << "Not a number -> ";
		return (-1);
	}
	else if (to_scan[0] - 48 > size)
	{
		std::cout << "Not enough contacts -> ";
		return (-1);
	}
	return ((int)to_scan[0] - 48);
}

int PhoneBook::SearchContact(void)
{
	std::string to_scan;
	int	to_search;

	to_search = -1;
	if (this->_size == 0)
	{
		std::cout << "\nNo contacts to search\n";
		return (1);
	}
	while (to_search < 0 || to_search >= this->_size)
	{
		std::cin.clear();
		std::clearerr(stdin);
		this->DisplayContacts();
		std::cout << "Write the index of the contact to search:\n";
		to_search = 0;
		std::getline(std::cin, to_scan);
		to_search = GetToSearch(to_scan, this->_size);
		if (to_search == -1)
			std::cout << "Invalid index\n";
	}
	this->_contacts[to_search].DisplaySelected();
	return (0);
}

void PhoneBook::ExitPhonebook(void)
{
	std::cout << "Shutting down the phonebook\n";
}

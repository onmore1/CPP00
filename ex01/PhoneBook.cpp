/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:45:52 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/08 13:16:04 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "include.hpp"

std::string ShortenString(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	return (str);
}

void	PrintBanner(int mode)
{
	if (mode == 0)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "| Index | First Name | Last Name | Nickname |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else if (mode == 1)
	{
		std::cout << "\n";
		std::cout << "-----------------------------------------------------------------------" << std::endl;
		std::cout << "| Index | First Name | Last Name | Nickname | Phone Number |  Secret  |" << std::endl;
		std::cout << "-----------------------------------------------------------------------" << std::endl;
	}
}

void PhoneBook::ShowContact(int index, int mode)
{
	std::string Name = ShortenString(Contacts[index].GetName());
	std::string Last = ShortenString(Contacts[index].GetLastName());
	std::string Nick = ShortenString(Contacts[index].GetNickname());
	if (mode == 0)
	{
		std::cout << "|" << std::setw(7)  << std::right << index;
		std::cout << "|" << std::setw(12) << std::right << Name;
		std::cout << "|" << std::setw(11) << std::right << Last;
		std::cout << "|" << std::setw(10) << std::right << Nick;
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------\n";
	}
	else
	{
		std::string Phone  = ShortenString(Contacts[index].GetNumber());
		std::string Secret = ShortenString(Contacts[index].GetSecret());
		std::cout << "|" << std::setw(7)  << std::right << index;
		std::cout << "|" << std::setw(12) << std::right << Name;
		std::cout << "|" << std::setw(11) << std::right << Last;
		std::cout << "|" << std::setw(10) << std::right << Nick;
		std::cout << "|" << std::setw(14) << std::right << Phone;
		std::cout << "|" << std::setw(10)  << std::right << Secret;
		std::cout << "|" << std::endl;
		std::cout << "-----------------------------------------------------------------------\n";
	}
}

void PhoneBook::ListPhoneBook()
{
	int			index = 0;
	std::string c_index;
	PrintBanner(0);
	while(index < MaxId)
	{
		if (Contacts[index].IsInit())
		{
			ShowContact(index, 0);
			index++;
		}
		else
			index++;
	}
	if (index == 0)
		return ;
	while (1)
	{
		std::cout << "\nInput Contact Index To See Additional Info: ";
		std::getline(std::cin, c_index);
		if (c_index.empty() || !std::isdigit(c_index[0]))
		{
			std::cout << "Invalid Input\n";
			continue;
		}
		int i = std::atoi(c_index.c_str()); // c_str converts to const char *
		if (i >= MaxId)
			std::cout << "Index Out Of Range\n";
		else if (!Contacts[i].IsInit())
			std::cout << "No Contact At This Index\n";
		else
		{
			PrintBanner(1);
			ShowContact(i, 1);
			break;
		}
	}
}

void	PhoneBook::SetContact(std::string First, std::string Last, std::string Nick,
					std::string Num, std::string Secret)
{
	if (Index >= 8)
		Index = 0;
	PhoneBook::Contacts[Index].SetContact(First, Last, Nick, Num, Secret);
	Index++;
}

PhoneBook::PhoneBook() : Index(0)
{
}

void	PhoneBook::Add()
{
	std::string First;
	std::string Last;
	std::string Nick;
	std::string Phone;
	std::string Secret;

	while (1)
	{
		std::cout << "Input First Name: ";
		std::getline(std::cin, First);
		if (!First.empty() && !IsOnlySpaces(First))
			break ;
		std::cout << "First name can not be empty\n";
	}
	while (1)
	{
		std::cout << "Input Last Name: ";
		std::getline(std::cin, Last);
		if (!Last.empty() &&!IsOnlySpaces(Last))
			break;
		std::cout << "Last name can not be empty\n";
	}
	while (1)
	{
		std::cout << "Input Nickname: ";
		std::getline(std::cin, Nick);
		if (!Nick.empty() && !IsOnlySpaces(Nick))
			break;
		std::cout << "Nickname can not be empty\n";
	}
	while (1)
	{
		std::cout << "Input Phone Number: ";
		std::getline(std::cin, Phone);
		if (!Phone.empty() && !IsOnlySpaces(Phone))
			break;
		std::cout << "Phone can not be empty\n";
	}
	while (1)
	{
		std::cout << "Input Darkest Secret: ";
		std::getline(std::cin, Secret);
		if (!Secret.empty() && !IsOnlySpaces(Secret))
			break;
		std::cout << "Secret can not be empty\n";
	}
	SetContact(First, Last, Nick, Phone, Secret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:13:01 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/03 15:55:13 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructor
Contact::Contact() : Initialized(false){
}

void	Contact::SetContact(std::string First, std::string Last, std::string Nick, std::string Num, std::string Secret)
{
	NameFirst = First;
	NameLast = Last;
	Nickname = Nick;
	Number = Num;
	DarkestSecret = Secret;
	Initialized = true;
}
std::string Contact::GetName()
{
	return (NameFirst);
}

std::string Contact::GetLastName()
{
	return (NameLast);
}
std::string Contact::GetNickname()
{
	return (Nickname);
}
std::string Contact::GetSecret()
{
	return (DarkestSecret);
}
std::string Contact::GetNumber()
{
	return (Number);
}

bool	Contact::IsInit()
{
	return (Initialized);
}


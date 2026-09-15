/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:58:44 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/02 14:29:36 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact{
	private:
		std::string NameFirst;
		std::string NameLast;
		std::string	Nickname;
		std::string	Number;
		std::string	DarkestSecret;
		bool		Initialized;
	public:
		Contact();
		void		SetContact(std::string First, std::string Last, std::string NickName, std::string Number, std::string Secret);
		bool		IsInit();
		std::string GetName();
		std::string GetLastName();
		std::string	GetNickname();
		std::string GetSecret();
		std::string	GetNumber();
};

#endif
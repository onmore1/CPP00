/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:29:53 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/03 15:59:54 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	Contacts[8];
		int		Index;
	public:
		PhoneBook();
		void SetContact(std::string First, std::string Last, std::string Nick,
						std::string Num, std::string Secret);
		void Add();
		void ListPhoneBook();
		void ShowContact(int index, int mode);
};

#endif
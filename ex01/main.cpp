/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:20:12 by vananiev          #+#    #+#             */
/*   Updated: 2026/08/28 12:50:43 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

// static void FillTestContacts(PhoneBook &Book, bool &is_empty)
// {
// 	is_empty = false;
// 	Book.SetContact("Alice", "Smith", "ali", "1234567890", "fears spiders");
// 	Book.SetContact("Bob", "Johnson", "bobby", "0987654321", "cant swim");
// 	Book.SetContact("Charlie", "Brown", "chuck", "1112223333", "sleeps with light on");
// 	Book.SetContact("Diana", "Prince", "dee", "4445556666", "cries at ads");
// 	Book.SetContact("Edward", "Norton", "ed", "7778889999", "never read a book");
// 	Book.SetContact("Fiona", "Green", "fi", "1231231234", "scared of dogs");
// 	Book.SetContact("George", "White", "geo", "3213214321", "still has myspace");
// }

bool	IsOnlySpaces(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!std::isspace(str[i]))
			return (false);
		i++;
	}
	return (true);
}

int main()
{
	PhoneBook Book;
	std::string cmd;
	int			stopper = 0;
	bool		is_empty = true;
	// FillTestContacts(Book, is_empty);
	while(1)
	{
		if (!stopper)
		{
			std::cout << "\nInput Action (ADD, SEARCH, EXIT)\n";
			stopper = 1;
		}
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			std::cin.ignore(); //clears \n
			Book.Add();
			is_empty = false;
			stopper = 0;
		}
		else if (cmd == "SEARCH")
		{
			if (is_empty)
			{
				std::cout << "Phone book is empty!" << std::endl;
				continue;
			}
			std::cin.ignore();
			Book.ListPhoneBook();
			stopper = 0;
		}
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
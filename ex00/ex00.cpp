/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:51:40 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/08 13:16:12 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> 

int main(int ac, char **argv)
{
	int	index = 0;
	int	index2 = 1;
	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ,1);
	while(index2 < ac)
	{
		index = 0;
		while(argv[index2][index])
		{
			argv[index2][index] =  std::toupper(argv[index2][index]);
			std::cout << argv[index2][index];
			index++;;
		}
		std::cout << " ";
		index2++;
	}
	std::cout << std::endl;

}
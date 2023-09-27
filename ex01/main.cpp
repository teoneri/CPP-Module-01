/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:32:39 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 14:46:32 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(5, "Jeff");
	for(int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
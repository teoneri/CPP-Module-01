/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:35:20 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 14:02:11 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name;

	std::cout << "Creating zombie on stack.\nInsert name of Zombie: ";
	std::cin >> name;
	Zombie zombie_0(name);
	zombie_0.announce();
	std::cout << "Creating zombie on heap.\nInsert name of Zombie: " << std::flush;
	std::cin >> name;
	Zombie *zombie_1 = newZombie(name);
	zombie_1->announce();
	delete zombie_1;

	std::cout << "Creating random zombie..." << std::endl;
	randomChump("rAndOM");
				
}
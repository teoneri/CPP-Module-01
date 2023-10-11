/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:32:44 by mneri             #+#    #+#             */
/*   Updated: 2023/10/11 15:56:40 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " Has been destroyed" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "A Zombie has SPAWNED" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

std::string Zombie::getName()
{
	return this->_name;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

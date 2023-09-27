/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:18:53 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 17:10:10 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

std::string HumanB::getName()
{
	return name;
}

void	HumanB::setWeapon(Weapon &weapon_)
{
	weapon = &weapon_;
}

HumanB::HumanB(std::string name_)
{
	name = name_;
	weapon = NULL;
	// std::cout << "HumanB " << name << " has been created";
}

HumanB::~HumanB()
{
	// std::cout << "HumanB has been destroyed";
}

void HumanB::attack()
{
	if(!weapon)
		std::cout << this->getName() << " can not attack without a weapon " << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << weapon->getType() << std::endl;
}
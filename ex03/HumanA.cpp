/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:10:17 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 16:50:09 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


std::string HumanA::getName()
{
	return name;
}

void HumanA::setName(std::string name_)
{
	name = name_;
	// std::cout << "HumanA " << name << " has been created";

}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) { 
	
}

HumanA::~HumanA()
{
	// std::cout << "HumanA has been destroyed";
}

void HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << weapon.getType() << std::endl;
}
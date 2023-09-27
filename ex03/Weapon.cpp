/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:04:05 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 16:37:49 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_)
{
	this->type = weapon_;
	// std::cout << "weapon created.";
}

Weapon::Weapon()
{
	// std::cout << "weapon w/out type created.";
}

Weapon::~Weapon()
{
	// std::cout << "Weapon destroyed";
}

std::string Weapon::getType(void)
{
	return type;
}

void Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
}
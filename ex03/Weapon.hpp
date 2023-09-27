/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:01:01 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 16:16:40 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string weapon_);
		Weapon();
		~Weapon();
		std::string getType(void);
		void setType(std::string weapon_type);
		
};

#endif
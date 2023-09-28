/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:26:25 by mneri             #+#    #+#             */
/*   Updated: 2023/09/28 16:37:08 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

Harl::Harl(void){
}

Harl::~Harl(void){
}

void Harl::complain(std::string level)
{
	
}
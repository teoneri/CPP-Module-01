/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:07:08 by mneri             #+#    #+#             */
/*   Updated: 2023/09/29 15:17:51 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");	
	harl.complain("INFO");	
	harl.complain("WARNING");	
	harl.complain("ERROR");	
	harl.complain("error");	
}
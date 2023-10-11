/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:00:03 by mneri             #+#    #+#             */
/*   Updated: 2023/10/11 15:51:03 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);
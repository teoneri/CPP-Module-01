/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:00:03 by mneri             #+#    #+#             */
/*   Updated: 2023/09/27 14:33:43 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		std::string _name;
		void	announce(void);
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
};
Zombie* zombieHorde( int N, std::string name );

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:00:03 by mneri             #+#    #+#             */
/*   Updated: 2023/10/11 15:57:17 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		void	announce(void);
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		std::string getName();
		void setName(std::string name);
};
Zombie* zombieHorde( int N, std::string name );

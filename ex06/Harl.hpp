/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:26:29 by mneri             #+#    #+#             */
/*   Updated: 2023/09/29 16:13:42 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
    typedef void (Harl::*LogFunction)(void);
    LogFunction logFunctions[4];
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);

};

int find_level(std::string level);
#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " Has been destroyed" << std::endl;
}


Zombie::Zombie(std::string name)
{
	_name = name;
}
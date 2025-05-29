#ifndef __FRAGTRAP_H
# define __FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(std::string, int);
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& t);
		FragTrap&	operator=(const FragTrap& t);
		~FragTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
};

#endif

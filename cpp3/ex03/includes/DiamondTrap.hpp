#ifndef __DIAMONDTRAP_H
# define __DIAMONDTRAP_H

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	protected:
		std::string __name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& t);
		DiamondTrap&	operator=(const DiamondTrap& t);
		~DiamondTrap();
		using	ScavTrap::attack;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	whoAmI();
};

#endif
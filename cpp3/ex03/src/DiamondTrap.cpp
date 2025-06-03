#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("No Name_clap_name"), FragTrap("No Name"), ScavTrap("No Name")
{
	this->__name = "No Name";
	setHpFrag();
	setManaScav();
	setStrFrag();
	std::cout << "Default Diamond constructor for No Name called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->__name = name;
	setHpFrag();
	setManaScav();
	setStrFrag();
	std::cout << "Diamond overloaded constructor for " << this->__name << " called\n";
}

DiamondTrap::~DiamondTrap() { std::cout << "Diamond Destructor for " << this->__name << " called\n"; }

DiamondTrap::DiamondTrap(const DiamondTrap& t) : ClapTrap(t.ClapTrap::__name), FragTrap(t.__name), ScavTrap(t.__name)
{
	__name = t.__name;
	__hp = t.__hp;
	__mana = t.__mana;
	__str = t.__str;
	ClapTrap::__name = t.ClapTrap::__name;
	std::cout << "Diamond Copy constructor for " << __name << " called\n";
}

DiamondTrap&	 DiamondTrap::operator=(const DiamondTrap& t)
{
	if (this != &t)
	{
		this->__name = t.__name;
		this->setHp(t.getHp());
		this->setMana(t.getMana());
		this->setStr(t.getStr());
		ClapTrap::__name = __name + "_clap_name";
	}
	std::cout << "Diamond Copy assignment operator for " << this->__name << " called\n";
	return (*this);
}


static bool	status(int hp, int mana, std::string name)
{
	if (hp > 0 && mana > 0)
		return (false);
	if (hp <= 0)
		std::cout << "DiamondTrap " << name << " needs healing.\n";
	else
		std::cout << "DiamondTrap " << name << " is out of energy!\n";
	return (true);
}

// void	DiamondTrap::attack(const std::string& target)
// {
// 	if (status(this->getHp(), this->getMana(), this->getName()))
// 		return ;
// 	this->setMana(this->getMana() - 1);
// 	std::cout << "DiamondTrap " << this->getName();
// 	std::cout << " scavenges " << target;
// 	std::cout << ", causing " << this->getStr();
// 	std::cout << " points of damage!\n";
// }

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() <= 0)
	{
		std::cout << "Stop! DiamondTrap " << this->getName() << " is already dead! But sadly it still takes " << amount << " damage.\n";
		this->setHp(this->getHp() - amount);
		return ;
	}
	this->setHp(this->getHp() - amount);
	std::cout << "DiamondTrap " << this->getName() << " takes " << amount << " damage ";
	if (this->getHp() <= 0)
		std::cout << "and is ready for decommission!";
	std::cout << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "DiamondTrap " << this->getName();
	std::cout << " heals itself for " << amount << " health.\n";
	this->setHp(this->getHp() + amount);
}

void	DiamondTrap::whoAmI()
{
	if (this->getHp() <= 0)
		std::cout << "DiamondTrap " << this->getName() << " is dead\n";
	else
		std::cout << "Am I " << this->__name << " or " << this->ClapTrap::__name << "? Such is the question.\n";
}

void	DiamondTrap::setName(std::string name)
{
	this->__name = name;
	ClapTrap::__name = name + "_clap_name";
}

std::string	DiamondTrap::getName() const
{
	return this->__name;
}

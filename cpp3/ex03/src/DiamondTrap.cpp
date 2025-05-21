#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("No Name_clap_name", 100, 50, 30)
{
	this->__name = "No Name";
	std::cout << "Default Diamond constructor for No Name called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30)
{
	this->__name = name;
	std::cout << "Diamond constructor for " << this->__name << " called\n";
}

DiamondTrap::~DiamondTrap() { std::cout << "Diamond Destructor for " << this->__name << " called\n"; }

DiamondTrap::DiamondTrap(const DiamondTrap& t) : ClapTrap(t), FragTrap(t), ScavTrap(t)
{
	*this = t;
	std::cout << "Diamond Copy constructor for " << this->__name << " called\n";
}

DiamondTrap&	 DiamondTrap::operator=(const DiamondTrap& t)
{
	if (this != &t)
	{
		this->__name = t.__name;
		this->setHp(t.getHp());
		this->setMana(t.getMana());
		this->setStr(t.getStr());
		ClapTrap::setName(this->__name + "_clap_name");
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

void	DiamondTrap::attack(const std::string& target)
{
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "DiamondTrap " << this->getName();
	std::cout << " scavenges " << target;
	std::cout << ", causing " << this->getStr();
	std::cout << " points of damage!\n";
}

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
	std::cout << "Am I " << this->__name << " or " << ClapTrap::getName() << "? Such is the question.\n";
}

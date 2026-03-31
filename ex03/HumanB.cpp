#include "HumanB.hpp"

void HumanB::attack() {
		std::cout << name << " atacks with their " << weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}
HumanB::~HumanB() {
	;
}
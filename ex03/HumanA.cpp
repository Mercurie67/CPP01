#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << name << " atacks with their " << weapon.getType() << "\n";
}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {} 
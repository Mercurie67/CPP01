#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setTipe(std::string type) {
	this->type = type;
}

Weapon::Weapon( std::string type) {
	this->type = type;
}

Weapon::~Weapon() {
	;
}

Weapon::Weapon() {
	;
}
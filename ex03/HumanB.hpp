#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;
	public:
		void attack() ;
		void setWeapon(Weapon* weapon) ;
		HumanB(std::string name) ;		
		~HumanB() ;


} ;

//Puntero a weapon: No es necesario iniciarlo en el constructor.
//Puede apuntar a nada

#endif
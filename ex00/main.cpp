#include "Zombie.hpp"

int main() {
	Zombie	z1("Pepe") ;
	z1.announce() ;
	Zombie	*z2 = newZombie("Paco");
	z2->announce();
	randomChump("Antonio") ;
	delete(z2) ;
	return 0 ;
}


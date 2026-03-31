#include "Zombie.hpp"

int main() {
	Zombie	z1("Pepe") ;
	z1.announce() ;
	int N = 5;
	Zombie*	Horde = zombieHorde(N, "Paco");	
	for(int i = 0; i < N; i++) {
		Horde[i].announce();
	}
	delete[](Horde) ;
	return 0 ;
}

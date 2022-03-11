#include "fractionar.h"

int main() {
	//CFractionar a;
	CFractionar b(12,72);
	CFractionar c(13, 5);
	CFractionar rezultat;

	//rezultat = c + b;

	//rezultat.afisare();

	//rezultat = c - b;

	//rezultat.afisare();

	rezultat = c - 7;

	rezultat.afisare();

	rezultat = c * b;
	
	rezultat.afisare();

	CFractionar x;
	x = !rezultat;

	x.afisare();

	return 0;
}
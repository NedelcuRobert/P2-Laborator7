#include "fractionar.h"

CFractionar::CFractionar() {
	numarator = 0;
	numitor = 1;
}

CFractionar::CFractionar(int m, int n) {
	numarator = m;
	numitor = n;
}

CFractionar CFractionar::operator=(CFractionar nr) {
	numarator = nr.numarator;
	numitor = nr.numitor;

	return nr;
}

CFractionar CFractionar::operator+(CFractionar nr) {
	CFractionar rez;
	if (numitor == nr.numitor) {
		return CFractionar((numarator + nr.numarator), (numitor));
	}
	else {
		rez.numarator = (numarator * nr.numitor) + (nr.numarator * numitor);
		rez.numitor = (numitor * nr.numitor);
	}
	return rez;
}

CFractionar CFractionar::operator-(CFractionar nr) {
	CFractionar rez;
	if (numitor == nr.numitor) {
		return CFractionar((numarator - nr.numarator), (numitor));
	}
	else {
		rez.numarator = (numarator * nr.numitor) - (nr.numarator * numitor);
		rez.numitor = (numitor * nr.numitor);
	}
	return rez;
}

CFractionar CFractionar::operator*(CFractionar nr) {
	CFractionar rez;
	rez.numarator = numarator * nr.numarator;
	rez.numitor = numitor * nr.numitor;

	return rez;
}

int GCD(int A, int B)
{
	if (!B)
		return A;
	return GCD(B, A % B);
}

CFractionar operator!(CFractionar nr) {
	int cmmdc = GCD(nr.numarator, nr.numitor);
	if (cmmdc == 1) {
		return nr;
	}
	else {
		nr.numarator = nr.numarator / cmmdc;
		nr.numitor = nr.numitor / cmmdc;
	}
	return nr;
}

void CFractionar::afisare() {
	cout << "Numar:" << " " << numarator << "/" << numitor << endl;
}



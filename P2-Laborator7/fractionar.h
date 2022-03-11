#include <iostream>

using namespace std;

class CFractionar
{
private:
	int numarator;
	int numitor;
public:
	CFractionar();
	CFractionar(int, int=1);
	~CFractionar() {};

	CFractionar operator=(CFractionar);

	CFractionar operator+(CFractionar);
	CFractionar operator-(CFractionar);
	CFractionar operator*(CFractionar);

	friend CFractionar operator!(CFractionar);

	void afisare();
};

int GCD(int A, int B);


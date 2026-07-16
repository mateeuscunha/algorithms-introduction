#include <iostream>

using namespace std;

int main() {
	string dna;
	cin >> dna;
	
	float pesototal = 0;
	
	for (unsigned i = 0; i < dna.size(); i++) {
		if (dna[i] == 'A')
			pesototal += 71.03711 + 18.01056;
		else if (dna[i] == 'C')
			pesototal += 103.00919 + 18.01056;
		else if (dna[i] == 'G')
			pesototal += 57.02146 + 18.01056;
		else if (dna[i] == 'T')
			pesototal += 101.04768 + 18.01056;
	}
	
	cout << pesototal << endl;

	return 0;
}

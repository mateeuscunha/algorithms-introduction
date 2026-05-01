#include <iostream>

using namespace std;

float peso (string fita) {
	float somatorio = 0;
	float massaAgua = 18.01056;
	
	for (unsigned i = 0; i < fita.size(); i++) {
		if (fita[i] == 'A')
			somatorio += 71.03711 + massaAgua;
		else if (fita[i] == 'C')
			somatorio += 103.00919 + massaAgua;
		else if (fita[i] == 'G')
			somatorio += 57.02146 + massaAgua;
		else if (fita[i] == 'T')
			somatorio += 101.04768 + massaAgua;
	}
	
	return somatorio;
}

int main() {
	string dna;
	cin >> dna;
	
	cout << peso(dna) << endl;

	return 0;
}

#include <iostream>

using namespace std;
/*
Primos
suas posicoes no vetor
*/
bool ehPrimo (int num) {
	if (num < 2) return false;
	
	for (int i = 2; i < num; i++) {
		if ((num % i) == 0) 
			return false;
	}
	
	return true;
}

int main() {
	int geral[9], primos[9], indices[9];
	int numPrimos = 0;
	
	
	for (int i = 0; i < 9; i++) // lendo geral
		cin >> geral[i];

	for (int i = 0; i < 9; i++) {
		if(ehPrimo(geral[i])) {
			primos[numPrimos] = geral[i];
			indices[numPrimos] = i;
			numPrimos++;
		}
	}
	
	/*IMPRESSÕES*/
	
	for (int i = 0; i < numPrimos; i++) {
		cout << primos[i] << " ";
		cout << indices[i] << endl;
	}
	
	cout << endl;
	
	return 0;
}

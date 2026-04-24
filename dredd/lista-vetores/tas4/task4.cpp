#include <iostream>

using namespace std;

int main() {
	char gabarito[10], mateus[10], gabriel[10];
	int acertosMateus, acertosGabriel;
	acertosMateus = acertosGabriel = 0;
	
	for (int i = 0; i < 10; i++) { //lendo gabarito
		cin >> gabarito[i];
	}
	
	
	for (int i = 0; i < 10; i++) { //lendo mateus
		cin >> mateus[i];
		if (mateus[i] == gabarito[i]) 
			acertosMateus++;
	}
	
	for (int i = 0; i < 10; i++) { //lendo gabriel
		cin >> gabriel[i];
		if (gabriel[i] == gabarito[i]) 
			acertosGabriel++;
	}

	cout << acertosMateus << endl;
	if (acertosMateus >= 6) 
		cout << "APROVADO" << endl;
	else 
		cout << "REPROVADO" << endl;
		
	cout << acertosGabriel << endl;
	if (acertosGabriel >= 6) 
		cout << "APROVADO" << endl;
	else 
		cout << "REPROVADO" << endl;

	return 0;
}

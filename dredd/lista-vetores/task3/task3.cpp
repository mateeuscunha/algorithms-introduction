#include <iostream>

using namespace std;
/*
	multiplos de 2
	multiplos de 3
	maior multiplo de 2
	maior multiplo de 3
*/

int main() {
	int geral[10];
	for (int i = 0; i < 10; i++) { //lendo o vetor geral
		cin >> geral[i]; 
	}
	
	int dois[10], tres[10];
	int tamDois, tamTres;
	tamDois = tamTres = 0;
	
	for (int i = 0; i < 10; i++) { //pegando multiplos de 2 e de 3
		if ((geral[i] % 2) == 0) {
			dois[tamDois] = geral[i];
			tamDois++;
		}
		if ((geral[i] % 3) == 0) {
			tres[tamTres] = geral[i];
			tamTres++;
		}
	}
	
	int maiorDois = dois[0];
	for (int j = 0; j < tamDois; j++) { //pegando o maior de dois[]
		if (dois[j] > maiorDois) {
			maiorDois = dois[j];
		}
	}
	
	int maiorTres = tres[0];
	for (int j = 0; j < tamTres; j++) { //pegando o maior de tres[]
		if (tres[j] > maiorTres) {
			maiorTres = tres[j];
		}
	}

	/*IMPRESSÕES*/
	
	for (int i = 0; i < tamDois; i++) {
		cout << dois[i] << " ";
	}
	
	cout << endl << maiorDois << endl;


	for (int i = 0; i < tamTres; i++) {
		cout << tres[i] << " ";
	}
	
	cout << endl << maiorTres << endl;

	return 0;
}

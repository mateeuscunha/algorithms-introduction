#include <iostream>

using namespace std;

int main() {
	int valor;
	int vetor[10];
	
	for (int i = 0; i < 10; i++) { //lendo os valores e jogando no vetor
		cin >> valor;
		vetor[i] = valor;
	}
	
	int indice;
	
	for (int c = 0; c < 5; c++) {
		cin >> indice;
		vetor[indice] *= 2;
	}
	
	
	for (int i = 0; i < 10; i++) { //imprimindo o vetor final
		cout << vetor[i] << " ";
	}
	


	return 0;
}

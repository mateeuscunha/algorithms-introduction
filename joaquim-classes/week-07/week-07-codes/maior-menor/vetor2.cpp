#include <iostream>
// #define TAM 5  -- constante em C

using namespace std;

int main() {
	const int TAM = 6;
	int vetor[TAM];
	
	int maior, menor;
	int posMaior, posMenor;
	
	for (int i = 0; i < TAM; i++) {
		cin >> vetor[i];	
	}
	
	maior = menor = vetor[0]; //atribuição múltipla
	posMaior = posMenor = 0;
	
	for (int i = 0; i < TAM; i++) {
		if (vetor[i] > maior) {
			maior = vetor[i];
			posMaior = i;
		} else if (vetor[i] < menor) {
			menor = vetor[i];
			posMenor = i;
		}
	}
	
	cout << "O maior é: " << maior << " posicionado em: " << posMaior << endl;
	cout << "O menor é: " << menor << " posicionado em: " << posMenor << endl;

	return 0;
}

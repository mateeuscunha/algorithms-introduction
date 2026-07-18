#include <iostream>

using namespace std;

void selection_sort (int *vet, int tam) {
	int menor, auxTroca;
	for (int indice = 0; indice < tam-1; indice++) {
		menor = indice;
		for (int j = indice + 1; j < tam; j++)
			if (vet[j] < vet[menor])
				menor = j;
	
		auxTroca = vet[indice];
		vet[indice] = vet[menor];
		vet[menor] = auxTroca;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	
	for (int i = 0; i < tam; i++)
		cin >> vet[i];

	cout << "O vetor ordenado é: ";
	selection_sort(vet, tam);
	
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";

	delete [] vet;
	return 0;
}

#include <iostream>

using namespace std;

void crescente_insertion (int *vet, int inicio, int fim) {
	int valor_pivo, j;
	for (int i = inicio; i < fim; i++) {
		valor_pivo = vet[i];
		j = i-1;
		while ((j >= 0) and (vet[j] > valor_pivo)) {
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = valor_pivo;
	}
}

void decrescente_selection (int *vet, int inicio, int fim) {
	int posMaior, aux;
	for (int i = inicio; i < fim; i++) {
		posMaior = i;
		for (int j = i+1; j <= fim; j++)
			if (vet[j] > vet[posMaior])
				posMaior = j;
				
		aux = vet[posMaior];
		vet[posMaior] = vet[i];
		vet[i] = aux;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];

	crescente_insertion (vet, 0, tam/2);
	decrescente_selection (vet, tam/2, tam-1);
	
	for (int i = 0; i < tam; i++) 
		cout << vet[i] << " ";

	delete[] vet;
	return 0;
}

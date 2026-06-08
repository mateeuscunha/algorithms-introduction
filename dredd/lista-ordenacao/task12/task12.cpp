#include <iostream>

using namespace std;

void selection_decrescente (int *vet, int tam) {
	int posMaior, aux;
	for (int i = 0; i < tam-1; i++) {
		posMaior = i;
		for (int j = i+1; j < tam; j++)
			if (vet[j] > vet[posMaior])
				posMaior = j;
				
		aux = vet[posMaior];
		vet[posMaior] = vet[i];
		vet[i] = aux;
		
		for (int k = 0; k < tam; k++)
			cout << vet[k] << " ";
		cout << endl;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	selection_decrescente(vet, tam);

	delete [] vet;
	return 0;
}

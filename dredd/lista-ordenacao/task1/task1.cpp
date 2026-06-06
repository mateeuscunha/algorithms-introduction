#include <iostream>

using namespace std;

void selection (int *vet, int pos, int tam) {
	int posMaior, aux;
	
	for (int i = 0; i <= pos; i++) {
		posMaior = i;
		for (int j = i+1; j <= tam-1; j++)
			if (vet[j] > vet[posMaior])
				posMaior = j;
		
		aux = vet[i];
		vet[i] = vet[posMaior];
		vet[posMaior] = aux;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	int pos;
	cin >> pos;

	selection (vet, pos, tam);
	
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";
	cout << endl;

	delete [] vet;
	return 0;
}

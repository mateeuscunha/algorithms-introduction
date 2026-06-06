#include <iostream>

using namespace std;

void selection_dois (int *vet, int tam) {
	int posMenor, aux;
	
	for (int i = tam-1; i >= 0; i--) {
		posMenor = i;
		for (int j = i-1; j >= 0; j--)
			if (vet[j] < vet[posMenor])
				posMenor = j;
	
		aux = vet[i];
		vet[i] = vet[posMenor];
		vet[posMenor] = aux;
		
		for (int i = 0; i < tam; i++){
			cout << vet[i] << " ";
		}
		cout << endl;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	selection_dois(vet, tam);

	delete [] vet;
	return 0;
}

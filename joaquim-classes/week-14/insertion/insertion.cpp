#include <iostream>

using namespace std;

void insertion_sort(int *vetor, int tam) {
	int valor_pivo, j;
	for (int i = 1; i < tam; i++) {
		valor_pivo = vetor[i];
		j = i-1;
		while ((j >= 0) and (valor_pivo < vetor[j])) {
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = valor_pivo;
	}
}

int main() {
	int tam;
	cin >> tam;
	
	int *vet = new int[tam];
	
	for (int i = 0; i < tam; i++)
		cin >> vet[i];

	cout << "O vetor ordenado é: ";
	insertion_sort(vet, tam);
	
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";

	delete [] vet;
	return 0;
}

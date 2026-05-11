#include <iostream>

using namespace std;

void ordenar (int *v, int tam) {
	int indFinal = tam - 1; 
	for (int i = 0; i < indFinal; i++) // importante que é MENOR que o ultimo, nao menor que o tamanho
		for (int j = 0; j < indFinal - i; j++) {
			if (v[j] > v[j+1]) {
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
}

bool iguais (int *A, int *B, int tam) {
	ordenar(A, tam);
	ordenar(B, tam);
	
	bool todosIguais = true;
	for (int i=0; i < tam; i++)
		if (A[i] != B[i])
			todosIguais = false;
	
	return todosIguais;
}

int main() {
	int tam;
	cin >> tam;
	
	int *vetA = new int[tam];
	int *vetB = new int[tam];
	
	for (int i = 0; i < tam; i++)
		cin >> vetA[i];
	for (int i = 0; i < tam; i++)
		cin >> vetB[i];
			
	if (iguais(vetA, vetB, tam))
		cout << "IGUAIS" << endl;
	else 
		cout << "DIFERENTES" << endl;
	
	
	delete [] vetA;
	delete [] vetB;

	return 0;
}

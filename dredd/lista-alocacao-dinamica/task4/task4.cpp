#include <iostream>

using namespace std;

int main() {
	int tam;
	cin >> tam;
	
	int *vetor = new int[tam];
	
	for (int i = 0; i < tam; i++)
		cin >> vetor[i];
	
	int m1, m2; //marcadores
	cin >> m1 >> m2;
	
	int posm1, posm2; //achando a posicao deles
	for (int i = 0; i < tam; i++) {
		if (vetor[i] == m1)
			posm1 = i;
		if (vetor[i] == m2)
			posm2 = i;
	}
	
	if (posm1 > posm2) { //ordenando os marcadores
		int temp = posm1;
		posm1 = posm2;
		posm2 = temp;
	}
	
	//imprimindo na ordem inversa
	for (int i = (posm2-1); i > posm1; i--)
		cout << vetor[i] << " ";
	
	
	delete[] vetor;



	return 0;
}

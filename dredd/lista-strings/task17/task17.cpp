#include <iostream>

using namespace std;

int main() {
	unsigned tam;
	cin >> tam;
	
	string vetor[tam];
	long hashes[tam];
	
	for (unsigned i = 0; i < tam; i++)
		cin >> vetor[i];

	//ate aqui so lendo o tamanho e o vetor

	for (unsigned i = 0; i < tam; i++) { //percorrendo o vetor de palavras
		long hash = 0;
		for (unsigned j = 0; j < vetor[i].size(); j++) { //para cada palavra...
			hash = (97 * hash + vetor[i][j]) % 100;
		}
		
		hashes[i] = hash;
	}
	
	// imprimir
	
	long somatorio = 0;
	for (unsigned i = 0; i < tam; i++) {
		cout << hashes[i] << " ";
		somatorio += hashes[i];
	}
	
	cout << somatorio;

	return 0;
}

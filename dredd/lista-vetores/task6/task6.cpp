#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	int copiaA = a;
	int copiaB = b;
	
	
	//PEGANDO O TAMANHO DOS INTEIROS
	
	int tamA, tamB;
	tamA = tamB = 1;
	
	while ((a/10) != 0) {
		a /= 10;
		tamA++;
	}
	
	while ((b/10) != 0) {
		b /= 10;
		tamB++;
	}
	
	if (tamA < tamB) 
		tamA = tamB;
	else
		tamB = tamA;
	
	//TRANSFORMANDO TUDO EM ZERO
	
	int vetorA[tamA], vetorB[tamB];
	
	for (int i = 0; i < tamA; i++) {
		vetorA[i] = 0;
		vetorB[i] = 0;
	}
	
	
	//SEPARANDO EM VETORES
	
	int j = tamA;
	while (copiaA != 0) {
		vetorA[j-1] = copiaA % 10;
		copiaA /= 10;
		j--;
	}
	
	int k = tamB;
	while (copiaB != 0) {
		vetorB[k-1] = copiaB % 10;
		copiaB /= 10;
		k--;
	}

	//QTD DE VEZES QUE SOBE O 1 NA SOMA

	int qtd = 0;
	bool ultimoEra = false;

	for (int g = (tamA - 1); g >= 0; g--) {
		
		if (!ultimoEra) {
			if ((vetorA[g] + vetorB[g]) > 9)
			qtd++;
			ultimoEra = true;
		} else if (ultimoEra) {
			if (((vetorA[g] + vetorB[g]) + 1) >= 10) {
				qtd++;
				ultimoEra = true;
			} else {
				ultimoEra = false;
			}
		}
	}
	
	//IMPRESSÃO
	
	cout << qtd << endl;

	return 0;
}

#include <iostream>

using namespace std;

void exibe (int *vet, int tam, int p1, int p2, bool troca) {
	char flag;
	if (troca)
		flag = 't';
	else
		flag = '*';
	
	for (int i = 0; i < tam; i++) {
		if (i == p1 or i == p2)
			cout << vet[i] << " " << flag << "\t";
		else 
			cout << vet[i] << "\t";
	}
	cout << endl;
}

void selection (int *vet, int tam) {
	int menor, auxTroca;
	for (int indice = 0; indice < tam-1; indice++) {
		menor = indice;
		
		for (int j = indice + 1; j < tam; j++) {
			exibe(vet, tam, menor, j, false);
			if (vet[j] < vet[menor])
				menor = j;
		}
		
		exibe(vet, tam, indice, menor, true);
		
		auxTroca = vet[indice];
		vet[indice] = vet[menor];
		vet[menor] = auxTroca;
	}
}

int main() {
	int qtd;
	cin >> qtd;
	
	int *vet = new int[qtd];
	for (int i = 0; i < qtd; i++)
		cin >> vet[i];
		
	selection (vet, qtd);
	//exibicao final
	exibe (vet, qtd, -1, -1, false);

	delete[] vet;
	return 0;
}

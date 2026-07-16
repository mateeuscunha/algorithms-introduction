#include <iostream>

using namespace std;

int onde(int vetor[], int inicio, int fim, int flag, int& comparacoes) {
	int meio = (inicio+fim)/2;
	
	
	if (vetor[meio] == flag) {
		comparacoes++;
		return meio;
	}
	else {
		if (inicio <= fim) {
			if (vetor[meio] < flag) {
				comparacoes++;
				return onde(vetor, meio+1, fim, flag, comparacoes);
			}
			else {
				comparacoes++;
				return onde(vetor, inicio, meio-1, flag, comparacoes);
			}
		} else 
			return -1;
	}
	
}

int main() {
	int qtd;
	cin >> qtd;
	
	int *vetor = new int[qtd];
	
	for (int i = 0; i < qtd; i++)
		cin >> vetor[i];
	
	int flag;
	cin >> flag;
	
	int comparacoes = 0;
	int posicao = onde(vetor, 0, qtd-1, flag, comparacoes);
	
	cout << posicao << endl;
	cout << comparacoes << endl;
	
	delete []vetor;
	return 0;
}

#include <iostream>

using namespace std;

int busca (int *v, int tam, int tag, int posInicial) {
	if (posInicial >= tam) {
		return -1;
	}
	
	int meio = ((tam-1) + posInicial) / 2;
	
	if (v[meio] == tag)
		return meio;
	else if (v[meio] > tag) 
		return busca (v, tam, tag, meio+1);
	else
		return busca (v, meio-1, tag, posInicial);
}

int main() {
	int qtd;
	cin >> qtd;
	
	int *V = new int[qtd];
	
	for (int i = 0; i < qtd; i++)
		cin >> V[i];
	
	int procurado;
	cin >> procurado;

	cout << busca(V, qtd, procurado, 0) << endl;

	delete [] V;
	return 0;
}

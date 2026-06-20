#include <iostream>

using namespace std;

int busca (int inicio, int fim, int *vet, int flag) {
	if (inicio > fim)
		return -1;
		
	int meio = (inicio + fim) / 2;
	cout << vet[meio] << " ";
	
	
	if (vet[meio] == flag)
		return meio;
	else if (flag < vet[meio]) //descarta a direita
		return busca (inicio, meio-1, vet, flag);
	else 
		return busca (meio+1, fim, vet, flag);
}

int main() {
	int qtd;
	cin >> qtd;
	
	int *vet = new int[qtd];
	for (int i = 0; i < qtd; i++)
		cin >> vet[i];
	
	int flag;
	cin >> flag;
	
	busca (0, qtd-1, vet, flag);
	
	delete [] vet;
	return 0;
}

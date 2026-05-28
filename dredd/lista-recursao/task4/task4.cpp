#include <iostream>

using namespace std;

int buscaBinaria (int inicio, int fim, int *vet, int b) {
	int meio = (inicio + fim) / 2;
	
	if (inicio > fim)
		return -1;
	
	if (vet[meio] == b)
		return meio;
	else if (vet[meio] < b) { //descarta a esquerda
		return buscaBinaria (meio+1, fim, vet, b);
	} else { //descarta a direita
		return buscaBinaria (inicio, meio-1, vet, b);
	}
	
}

int main() {
	int n;
	cin >> n;
	
	int *vet = new int[n];
	for (int i = 0; i < n; i++)
		cin >> vet[i];
	
	int b;
	cin >> b;
	
	int m;
	cin >> m;
	
	int pos = buscaBinaria(0, n-1, vet, b);
	
	if (pos != -1)
		vet[pos] *= m;

	for (int i = 0; i < n; i++)
		cout << vet[i] << " ";
	cout << endl;

	delete [] vet;
	return 0;
}

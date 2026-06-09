#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int *vet = new int[N];
	for (int i = 0; i < N; i++)
		cin >> vet[i];

	int excluidos = 0;
	for (int i = 0; i < N-1; i++)
		if (vet[i] != -1) {
			for (int j = i+1; j < N; j++)
				if (vet[i] == vet[j]) {
					vet[j] = -1;
					excluidos++;
				}
		}

	int *novo = new int[N-excluidos];
	int tamNovo = 0;
	for (int i = 0; i < N; i++)
		if (vet[i] != -1)
			novo[tamNovo++] = vet[i];
	delete [] vet;
	vet = novo;
	
	
	cout << tamNovo << endl;
	
	for (int i = 0; i < tamNovo; i++)
		cout << vet[i] << " ";
	

	delete [] vet;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int *vet = new int[10];
	for (int i = 0; i < 10; i++)
		cin >> vet[i];
		
	
	int capacidade = 10;
	int i = 0;
	while (i < capacidade) {
		bool remocao = false;
		if (vet[i] <= 0) {
			int *novo = new int[capacidade-1];
			int posNovo = 0;
			
			for (int k = 0; k < capacidade; k++)
				if (k != i)
					novo[posNovo++] = vet[k];
			
			capacidade--;
			delete [] vet;
			vet = novo;
			remocao = true;
		}
		
		if (!remocao)
			i++;
	}
	
	for (int i = 0; i < capacidade; i++)
		cout << vet[i] << " ";
	cout << endl;

	delete[] vet;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int *vet = new int[10];
	
	for (int i = 0; i < 10; i++)
		cin >> vet[i];
	
	
	int redimensionamentos = 0;
	int i = 0;
	int capacidade = 10;
	while (i < capacidade) {
		bool redimensionou = false;
		if (vet[i] % 5 == 0) {
			int *novo = new int[capacidade-1];
			int posNovo = 0;
			
			for (int k = 0; k < capacidade; k++)
				if (k != i)
					novo[posNovo++] = vet[k];
			
			capacidade--;
			
			delete [] vet;
			vet = novo;
			
			redimensionamentos++;
			redimensionou = true;
		}
		if (!redimensionou)
			i++;
	}
	
	for (int i = 0; i < capacidade; i++)
		cout << vet[i] << " ";
	cout << endl << redimensionamentos << endl;


	delete [] vet;
	return 0;
}

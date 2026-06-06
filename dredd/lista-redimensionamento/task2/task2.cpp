#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int *vet = new int[n];
	for (int i = 0; i < n; i++)
		cin >> vet[i];

	
	int flag = 0;
	bool primeiro = true;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			if (i != j)
				if ((vet[i] + vet[j] == n) and primeiro) {
					if (vet[i] <= vet[j])
						flag = vet[i];
					else
						flag = vet[j];
					primeiro = false;
				}
	
	
	int tam = 0;
	int contador = 0;
	if (!primeiro) //se tiver dois numeros que somados dao o tamanho do vetor		
		tam = n-flag;
	else
		tam = n-2;
	
	
	int *novo = new int[tam];
	if (tam == n-flag)
		for (int i = flag; i < n; i++)
			novo[contador++] = vet[i];
	else
		for (int i = 1; i < n-1; i++)
			novo[contador++] = vet[i];
	
	delete[] vet;
	
	for (int i = 0; i < contador; i++)
		cout << novo[i] << " ";
	cout << endl;

	delete []novo; 
	return 0;
}

#include <iostream>

using namespace std;

bool atende (int numero) {
	bool flag = true;
	if ((numero % 2 != 0) and (numero % 3 == 0))
		flag = false;
	
	return flag;
}

int main() {
	int n;
	cin >> n;
	
	int *vet = new int[n];
	
	int contador = n;
	for (int i = 0; i < n; i++) {
		cin >> vet[i];
		
		if (!atende(vet[i]))
			contador--;
	}
	
	int *novo = new int[contador];
	
	int iterador = 0;
	
	for (int i = 0; i < n; i++)
		if (atende(vet[i]))
			novo[iterador++] = vet[i];

	delete[] vet;
	
	cout << contador << endl;
	for (int i = 0; i < contador; i++)
		cout << novo[i] << " ";
	
	return 0;
}

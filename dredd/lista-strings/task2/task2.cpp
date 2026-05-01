#include <iostream>

using namespace std;

int letrasiguais (char palavra[6], char comparar[6]) {
	int quantidade = 0;
	for (int i = 0; i < 5; i++)
		if (comparar[i] == palavra[i])
			quantidade++;
	
	return quantidade;
}

int main() {
	char palavra[6];
	int n;
	
	cin >> palavra;
	cin >> n;
	
	int iterador = 0;
	int qtdMaior = -1;
	char maior[6];
	char comparar[6];
	
	while (iterador < n) {
		cin >> comparar;
		if (letrasiguais(palavra, comparar) >= qtdMaior) {
			qtdMaior = letrasiguais(palavra, comparar);
			for (int i = 0; i < 6; i++)
				maior[i] = comparar[i];
		}
		iterador++;
	}

	cout << maior << endl;

	return 0;
}

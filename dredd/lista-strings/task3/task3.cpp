#include <iostream>

using namespace std;

int ocorrencias (char letra, string palavra) {
	int numero = 0;
	
	unsigned i = 0;
	while (i < palavra.size()) {
		if (palavra[i] == letra)
			numero++;
		i++;
	}
	
	return numero;
}

int main() {
	int n;
	cin >> n;
	string lista[n];
	
	for (int i = 0; i<n; i++) 
		cin >> lista[i];
	
	char letra;
	cin >> letra;
	
	string maior = "";
	int qtdMaior = -1;

	for (int i = 0; i < n; i++)
		if (ocorrencias(letra, lista[i]) >= qtdMaior) {
			qtdMaior = ocorrencias(letra, lista[i]);
			maior = lista[i];
		}

	cout << maior << endl;

	return 0;
}

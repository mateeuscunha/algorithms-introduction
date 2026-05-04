#include <iostream>

using namespace std;

int main() {
	//lista 1
	unsigned tam1;
	cin >> tam1;
	
	string lista1[tam1];
	for (unsigned i = 0; i < tam1; i++)
		cin >> lista1[i];
	
	//lista 2
	unsigned tam2;
	cin >> tam2;
	
	string lista2[tam2];
	for (unsigned i = 0; i < tam2; i++)
		cin >> lista2[i];

	//checando os iguais
	string iguais[tam1];
	unsigned pos = 0;
	bool temAlgo = false;
	
	for (unsigned i = 0; i < tam1; i++)
		for (unsigned j = 0; j < tam2; j++)
			if (lista1[i] == lista2[j]) {
				iguais[pos++] = lista1[i];
				temAlgo = true;
			}
	
	//imprimindo
	
	if (temAlgo)
		for (unsigned i = 0; i < pos; i++)
			cout << iguais[i] << endl;
	else
		cout << "NADA" << endl;

	return 0;
}

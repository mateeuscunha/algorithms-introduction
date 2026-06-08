#include <iostream>
#include <fstream>

using namespace std;

struct Politico {
	string nome;
	string partido;
	float desvio;
};

void insertion (Politico *vet, int tam) {
	float valor_pivo;
	Politico pivo;
	for (int i = 1; i < tam; i++) {
		valor_pivo = vet[i].desvio;
		pivo = vet[i];
		int j = i-1;
		while ((j >= 0) and (vet[j].desvio < valor_pivo)) {
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	} 
}

int main() {
	ifstream entrada ("relacao_desvios.txt");
	
	Politico *vet = new Politico[100];
	
	
	Politico ladrao;
	int tam = 0;
	while (entrada >> ladrao.nome) {
		entrada >> ladrao.partido >> ladrao.desvio;
		vet[tam++] = ladrao;
	}
	
	insertion (vet, tam);
	
	for (int i = 0; i < tam; i++)
		cout << vet[i].nome << endl;


	delete [] vet;
	return 0;
}

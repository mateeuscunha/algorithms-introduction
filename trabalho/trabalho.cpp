//INTEGRANTES: Gilbran Guimaraes Salem, Mateus Souza Cunha

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct atirador {
	int numGuerra;
	string nomeGuerra;
	string arma;
	string profissao;
	float forca;
};

void ordenarForca(atirador *atiradores, int qtd) {
	for (int i = 0; i < qtd; i++) {
		atirador aux;
		if (i+1 != qtd) {
			if (atiradores[i].forca > atiradores[i+1].forca) {
				aux = atiradores[i];
				atiradores[i] = atiradores[i+1];
				atiradores[i+1] = aux;
			}
		}
	}
}


int main() {
	ifstream input ("atiradores.csv");
	
	atirador *vetor = new atirador[40];
	
	string primeiraLinha;
	getline(input, primeiraLinha);
	
	char pontoVirgula;
	
	for (int i = 0; i < 40; i++) {
		input >> vetor[i].numGuerra;
		input >> pontoVirgula;
		getline(input, vetor[i].nomeGuerra, ';');
		getline(input, vetor[i].arma, ';');
		getline(input, vetor[i].profissao, ';');
		input >> vetor[i].forca;
	}
	
	ordenarForca(vetor, 40);
	
	for (int i = 0; i < 40; i++) {
		cout << vetor[i].numGuerra << endl;
		cout << vetor[i].nomeGuerra << endl;
		cout << vetor[i].arma << endl;
		cout << vetor[i].profissao << endl;
		cout << vetor[i].forca << endl;
	}




	delete [] vetor;
	return 0;
}

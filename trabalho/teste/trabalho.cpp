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

void ordenarForcaDecrescente(atirador *atiradores, int qtd) {
	int posMaior;
	atirador aux;
	for (int i = 0; i < qtd-1; i++) {
		posMaior = i;
		for (int j = i+1; j < qtd; j++)
			if (atiradores[j].forca > atiradores[posMaior].forca)
				posMaior = j;
			
		aux = atiradores[posMaior];
		atiradores[posMaior] = atiradores[i];
		atiradores[i] = aux;
	}
}

void ordenarNomeCrescente(atirador *atiradores, int qtd) {
	int posMenor;
	atirador aux;
	for (int i = 0; i < qtd-1; i++) {
		posMenor = i;
		for (int j = i+1; j < qtd; j++)
			if (atiradores[j].nomeGuerra < atiradores[posMenor].nomeGuerra)
				posMenor = j;
			
		aux = atiradores[posMenor];
		atiradores[posMenor] = atiradores[i];
		atiradores[i] = aux;
	}
}

int main() {
	ifstream input ("atiradores.csv");
	
	atirador *vetor = new atirador[40];
	
	string primeiraLinha;
	getline(input, primeiraLinha);
	
	char pontoVirgula;
	
	atirador auxLeitura;
	int capacidade = 40;
	int tamanho = 0;
	
	while (input >> auxLeitura.numGuerra) {
		// lendo todas as informações do atirador
		input >> pontoVirgula;
		getline(input, auxLeitura.nomeGuerra, ';');
		getline(input, auxLeitura.arma, ';');
		getline(input, auxLeitura.profissao, ';');
		input >> auxLeitura.forca;
		
		// se necessário, redimensionando antes de atribuir ao vetor
		if (tamanho >= capacidade) {
			// redimensiona e atribui
			atirador *novo = new atirador[capacidade+5];
			copy(vetor, vetor + tamanho, novo);
			
			delete [] vetor;
			vetor = novo;
			
			capacidade += 5;
			
			vetor[tamanho] = auxLeitura;
			tamanho++;
		} else {
			// só atribui
			vetor[tamanho] = auxLeitura;
			tamanho++;
		}
	}
	
	//testando a ordenação por força
	ordenarForcaDecrescente(vetor, tamanho);

	//testando a ordenação por nome 
	ordenarNomeCrescente(vetor, tamanho);
	
	for (int i = 0; i < capacidade; i++) {
		cout << vetor[i].numGuerra << endl;
		cout << vetor[i].nomeGuerra << endl;
		cout << vetor[i].arma << endl;
		cout << vetor[i].profissao << endl;
		cout << vetor[i].forca << endl << endl;
	}


	delete [] vetor;
	return 0;
}

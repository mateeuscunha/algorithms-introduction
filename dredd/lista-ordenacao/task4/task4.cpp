#include <iostream>
#include <fstream>

using namespace std;

struct Fase {
	int num;
	string nome;
};

void crescente (Fase *vet, int qtd) {
	int menor;
	Fase aux;
	
	for (int i = 0; i < qtd-1; i++) {
		menor = i;
		for (int j = i+1; j < qtd; j++)
			if (vet[j].num < vet[menor].num)
				menor = j;
			
		aux = vet[menor];
		vet[menor] = vet[i];
		vet[i] = aux;
	}			
}

void decrescente (Fase *vet, int qtd, int K) {
	int posMaior;
	Fase aux;
	
	for (int i = K; i < qtd-1; i++) {
		posMaior = i;
		for (int j = i+1; j < qtd; j++)
			if (vet[j].num > vet[posMaior].num)
				posMaior = j;
			
		aux = vet[posMaior];
		vet[posMaior] = vet[i];
		vet[i] = aux;
	}			
}

int main() {
	ifstream input ("fases.txt");
	int K;
	cin >> K;
	
	//pegando a quantidade de dados
	Fase fase;
	int qtd = 0;
	while (input >> fase.num) {
		input >> fase.nome;
		qtd++;
	}
	
	input.clear();
	input.seekg(0);
	
	//lendo e alocando no vetor
	Fase *vet = new Fase[qtd];

	for (int i = 0; i < qtd; i++) {
		input >> fase.num >> fase.nome;
		vet[i] = fase;
	}
	
	//ordenando o vetor
	crescente (vet, K);
	decrescente (vet, qtd, K);
	
	for (int i = 0; i < qtd; i++)
		cout << vet[i].nome << endl;

	delete []vet;
	return 0;
}

#include <iostream>
using namespace std;

/*
temp media
quantos dias maiores que temp media
maior temperatura 
*/

int main() {
	double media, maior;
	int total = 0;
	double vet[7];
	
	double soma = 0.00;
	for (int i = 0; i < 7; i++) { //lendo o vetor e somando os valores recebidos
		cin >> vet[i];
		soma += vet[i];
	}

	media = soma/7;
	maior = vet[0];
	
	for (int i = 0; i < 7; i++) { //pegando o maior
		if (vet[i] > maior) 
			maior = vet[i];
		if (vet[i] > media) 
			total++;
	}
	
	cout << media << endl;
	cout << total << endl;
	cout << maior << endl;

	return 0;
}

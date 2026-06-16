#include <iostream>

using namespace std;

void printVet (float *vet, int tam, int marcado, int gap) {
	cout << gap << ":\t";
	
	for (int i = 0; i < tam; i++) {
		if (i == marcado)
			cout << vet[i] << "!";
		else
			cout << vet[i];
		
		if (i < tam-1) 
			cout << "\t";
	}
	cout << "\t" << endl;
}

void shell_sort (float *vet, int tam, int *saltos, int tamGap) {
	int posGap = tamGap-1;
	
	while (saltos[posGap] > tam)
		posGap--;
		
	float value;
	int j;
	
	while (posGap >= 0) {
		int gap = saltos[posGap];
		
		for (int i = gap; i < tam; i++) {
			value = vet[i];
			j = i;
			
			printVet (vet, tam, i, saltos[posGap]);
			
			while ((j >= gap) and (value < vet[j-gap])) {
				vet[j] = vet[j-gap];
				j = j - gap;
			}
			vet[j] = value;
			
			// impressao do vetor apos o elemento terminar de ser puxado
			cout << "\t";
			for (int i = 0; i < tam; i++)
				cout << vet[i] << "\t";
			cout << "\t" << endl;
		}
		posGap--;
	}
}

int main() {
	// int saltos[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int tamSaltos;
	cin >> tamSaltos;
	
	int *saltos = new int[tamSaltos];
	for (int i = 0; i < tamSaltos; i++)
		cin >> saltos[i];
		
	int tamVet;
	cin >> tamVet;
	
	float *vet = new float[tamVet];
	for (int i = 0; i < tamVet; i++)
		cin >> vet[i];
	

	shell_sort (vet, tamVet, saltos, tamSaltos);


	delete [] vet;
	delete [] saltos;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int qtd;
	cin >> qtd;
	
	// lendo os numeros
	float *vetor = new float[qtd];
	for (int i = 0; i < qtd; i++)
		cin >> vetor[i];

	float difMax;
	cin >> difMax;
	
	// calculando a media
	float somatorio = 0;
	for (int i = 0; i < qtd; i++) 
		somatorio += vetor[i];
	
	float media = somatorio / qtd;
	
	cout << media << endl;
	
	for (int i = 0; i < qtd; i++) {
		if (media > vetor[i])
			cout << media - vetor[i] << " ";
		else 
			cout << vetor[i] - media << " ";
	}	
	
	cout << endl;

	for (int i = 0; i < qtd; i++) {
		if ((media > vetor[i]) and ((media - vetor[i]) <= difMax))
			cout << vetor[i] << " ";
		else if ((media < vetor[i]) and ((vetor[i] - media) <= difMax))
			cout << vetor[i] << " ";
	}
	return 0;
}

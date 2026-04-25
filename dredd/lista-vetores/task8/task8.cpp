#include <iostream>

using namespace std;

int main() {
	int vetor[5];
	
	int j = 0;
	while (j < 5) { //lendo o vetor
		cin >> vetor[j];
		if (vetor[j] >= 0)
			j++;
	}
	
	//SUBSTITUINDO POR -1 GRADUALMENTE
	
	for (int rodada = 0; rodada < 5; rodada++) {
		
		int indMin = -1; //encontrando o indice do menor numero que ainda nao é -1
		for (int i = 0; i < 5; i++) {
			if (vetor[i] != -1) {
				if ((indMin == -1) or (vetor[i] < vetor[indMin])) {
					indMin = i;
				}
			}
		}
		
		vetor[indMin] = -1;
		
		for (int j = 0; j < 5; j++) { //imprimindo
			cout << vetor[j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

#include <iostream>

using namespace std;

void separar (char original[],int m, char antes[], int &numA, char depois[],int &numD, char parar) {
	numA = 0;
	numD = 0;
	
	
	for (int i = 0; i < m; i++) { //varrendo o original
		if (original[i] != parar) { //se nao for o caracter de parada
			if (original [i] < parar) { //se o caracter vier antes no alfabeto 
				antes[numA] = original[i];
				numA++;
			} else { //else, ele vem depois
				depois[numD] = original[i];
				numD++;
			}
		}
	}
	
	
}

int main() {
	int m;
	cin >> m;
	const int M = m;
	char vetor[M], antes[M], depois[M];
	int numA, numD;
	char parada;
	
	
	for (int i = 0; i < M; i++) { //lendo itens do vetor
		cin >> vetor[i];
	}
	
	
	cin >> parada;
	
	separar(vetor, m, antes, numA, depois, numD, parada);
	
	
	for (int j = 0; j < numA; j++) { //imprimindo antes
		cout << antes[j] << " ";
	}
	
	cout << endl;
	
	for (int j = 0; j < numD; j++) { //imprimindo depois
		cout << depois[j] << " ";
	}
	
	
	return 0;
}

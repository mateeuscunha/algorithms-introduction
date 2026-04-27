#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int distancia, matriz[7][7];
	cin >> distancia;
	
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> matriz[i][j];
		}
	}
	
	int somatorio = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if((i - 3 == abs(distancia)) or (j - 3 == abs(distancia))) {
				somatorio += matriz[i][j];
				cout << "Estou somando o elemento: [" << i << "][" << j << "]" << endl;
			}
		}
	}
	
	cout << somatorio << endl;

	return 0;
}

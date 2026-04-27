#include <iostream>

using namespace std;

int main() {
	int matriz[10][10], linha, maior, minimax, coluna;
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> matriz[i][j];
		}
	}
	
	maior = matriz[0][0];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (matriz[i][j] > maior) {
				maior = matriz[i][j];
				linha = i;
			}
		}
	}

	if (maior == matriz[0][0])
		linha = 0;

	coluna = 0;
	minimax = matriz[linha][coluna];
	for (int i = 0; i < 10; i++) {
		if (matriz[linha][i] < minimax) {
			minimax = matriz[linha][i];
			coluna = i;
		}
	}
	
	cout << minimax << endl;
	cout << linha << " " << coluna << endl;
	return 0;
}

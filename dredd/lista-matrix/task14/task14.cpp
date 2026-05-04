#include <iostream>

using namespace std;

int main() {
	//lendo a matriz
	char mat[6][6];
	
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> mat[i][j];

	//sequencia de caracteres
	int m;
	cin >> m;
	char sequencia[3];
	
	int iterador = 0;
	while (iterador < m) {
		cin >> sequencia[0] >> sequencia[1] >> sequencia[2];
		bool achou = false;
			for (int i = 0; i < 6; i++) {
				int j = 0;
				while (j < 6 and !achou) {
					if (mat[i][j] == sequencia[0]) {
						if ((j+1 < 6) and (mat[i][j+1] == sequencia[1])) { //esquerda para a direita
							if ((j+2 < 6) and (mat[i][j+2] == sequencia[2])) {
								cout << i << " " << j << endl;
								achou = true;
							}
						}
						else if ((j-1 >= 0) and (mat[i][j-1] == sequencia[1])) { //direita para a esquerda
							if ((j-2 >= 0) and (mat[i][j-2] == sequencia[2])) {
								cout << i << " " << j << endl;
								achou = true;
							}
						}
						else if ((i+1 < 6) and (mat[i+1][j] == sequencia[1])) { //cima para baixo
							if ((i+2 < 6) and (mat[i+2][j] == sequencia [2])) {
								cout << i << " " << j << endl;
								achou = true;
							}
						}
						else if ((i-1 >= 0) and (mat[i-1][j] == sequencia[1])) { //baixo para cima
							if ((i-2 >= 0) and (mat[i-2][j] == sequencia [2])) {
								cout << i << " " << j << endl;
								achou = true;
							}
						}
					}
					j++;
				}
			}
		if (!achou)
					cout << -1 << " " << -1 << endl;
		iterador++;
	}

	return 0;
}

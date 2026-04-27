#include <iostream>

using namespace std;
//transpor e reverter as linhas
int main() {
	int original[6][6], transposta[6][6], revertida[6][6];
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> original[i][j];
		}
	}
		
		
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			transposta[i][j] = original[j][i];
		}
	}

	for (int linha = 0; linha < 6; linha++) {
		for (int coluna = 0; coluna < 6; coluna++) {
			revertida[linha][coluna] = transposta[linha][5 - coluna];
		}
	}
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << revertida[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

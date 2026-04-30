#include <iostream>

using namespace std;

int main() {
	int tab[3][3];
	
	for (int i = 0; i < 3; i++) { //lendo a matriz
		for (int j = 0; j < 3; j++) {
				cin >> tab[i][j];
		}
	}
	
	int vencedor = 0;
	for (int j = 0; j < 3; j++) {
		if (tab[0][j] != 0) { 
			if (tab[1][j] == tab[0][j]) //checar vizinhos de baixo
				if (tab[2][j] == tab[0][j]) 
					vencedor = tab[0][j];
			if (tab[0][j+1] == tab[0][j]) //checar vizinhos do lado
				if (tab[0][j+2] == tab[0][j])
					vencedor = tab[0][j];
		}
	}
	if (tab[0][0] != 0) //diagonal principal
			if (tab[1][1] == tab[0][0])
				if (tab[2][2] == tab[0][0])
					vencedor = tab[0][0];
	
	if (tab[0][2] != 0) //diagonal secundaria
			if (tab[1][1] == tab[0][2])
				if (tab[2][0] == tab[0][2])
					vencedor = tab[0][2];
	
	cout << vencedor << endl;


	return 0;
}

#include <iostream>

using namespace std;

int main() {
	// float custo[partida][chegada];
	float custo[4][4], somatorio;
	
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			cin >> custo[i][j];
		}
	}

	int numCidades, partida, chegada;
	cin >> numCidades;
	
	
	cin >> partida;
	somatorio = 0;
	for (int i = 0; i < (numCidades-1); i++) {
		cin >> chegada;
		
		somatorio += custo[partida][chegada];
		partida = chegada;
	}
	
	cout << somatorio << endl;

	return 0;
}

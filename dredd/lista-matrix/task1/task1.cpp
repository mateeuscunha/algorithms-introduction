#include <iostream>
using namespace std;

int main() {
	int cartela[15][15], linha, coluna;
	
	for (int i = 0; i < 15; i++) { //lendo a cartela
		for (int j = 0; j < 15; j++) {
			cin >> cartela[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		cin >> linha >> coluna;
		
		if (cartela[linha][coluna] == 1)
			cout << "destroier" << endl;
		else if (cartela[linha][coluna] == 2)
			cout << "fragata" << endl;
		else if (cartela[linha][coluna] == 3)
			cout << "lancha" << endl;
		else 
			cout << "agua" << endl;
	}
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int fonte[7][7];
	
	//leitura
	
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			cin >> fonte[i][j];
	
	//somatorios
	int dentro, fora;
	dentro = fora = 0;
	
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++) {
			if ( (i >= j) and ((i + j) >= 6) ) //esta dentro
				dentro += fonte[i][j];
			else
				fora += fonte[i][j];
		}
		
	cout << dentro << " " << fora << endl;

	return 0;
}

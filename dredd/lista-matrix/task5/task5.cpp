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
			int di = abs(i - 3);
			int dj = abs(j - 3);
			
			if(di <= distancia and dj <= distancia) {
				if (di == distancia or dj == distancia)
					somatorio += matriz[i][j];
			}
		}
	}
	
	cout << somatorio << endl;

	return 0;
}

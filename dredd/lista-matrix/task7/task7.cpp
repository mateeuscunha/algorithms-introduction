#include <iostream>

using namespace std;

bool ehVogal(char c) {
	return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
	char matriz[6][6];
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> matriz[i][j];
		}
	}

	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {

			bool todasVogais = true;
			for (int li =i; li < i + 3; li++) {
				for (int lj = j; lj < j + 3; lj++) {
					if (!ehVogal(matriz[li][lj])) {
						todasVogais = false;
					}
				}
			}

			if(todasVogais) {
				for (int li =i; li < i + 3; li++) {
					for (int lj = j; lj < j + 3; lj++) {
						cout << matriz[li][lj] << " ";
					}
					cout << endl;
				}
				return 0;
			}
		}
	}

	cout << "submatriz nao encontrada" << endl;
	return 0;
}

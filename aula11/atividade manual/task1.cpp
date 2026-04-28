#include <iostream>

using namespace std;

int main() {
	int l, c;
	cin >> l >> c;
	int env[l][c];

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cin >> env[i][j];
		}
	}

	int conflitos = 0;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (env[i][j] == 1) {
				for (int k = i+1; k < l; k++) {
					if (env [k][j] == 1){
						conflitos++;
					}
				}
			}
		}
	}

	cout << conflitos << endl;

	return 0;
}

/*
teste1

4 5
0 1 0 0 1
1 0 1 0 0
0 1 0 0 0
0 0 1 1 0

saida = 2

teste2

4 5
1 0 0 0 1
0 1 0 0 0
0 0 1 0 0
0 1 1 0 1

saida = 3

teste4

4 5
0 0 0 1 0
1 0 0 0 1
0 1 0 0 0
0 0 1 0 0

saida = 0

*/

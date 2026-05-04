#include <iostream>

using namespace std;
//rotacionar 180graus: mat[i][j] vai para mat[n-1-i][n-1-j], onde n = 6;

void rotacionar (int mat[6][6]) {
	int res[6][6];
	
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			res[i][j] = mat[5-i][5-j];
		
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			mat[i][j] = res[i][j];
}

int main() {
	//lendo
	int fonte[6][6];
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> fonte[i][j];

	//imprimindo
	rotacionar(fonte);
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
			cout << fonte[i][j] << " ";
		cout << endl;
		}

	return 0;
}

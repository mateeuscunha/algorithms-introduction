#include <iostream>

using namespace std;

void multiplica (int mat1[3][3], int mat2[3][3]) {
	int res[3][3] = {};
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];
			
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat1[i][j] = res[i][j];
}

int main() {
	int matriz1[3][3];
	int matriz2[3][3];
	
	//lendo as matrizes
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matriz1[i][j];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matriz2[i][j];

	//imprimindo o produto entre as matrizes
	multiplica (matriz1, matriz2);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << matriz1[i][j] << " ";
		cout << endl;
		}
		
	return 0;
}

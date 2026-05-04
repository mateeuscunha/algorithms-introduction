#include <iostream>

using namespace std;

int main() {
	float mat[5][6];
	int I, J;
	
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 6; j++)
			cin >> mat[i][j];
	
	cin >> I >> J;
	
	//fazendo o somatório da linha I
	float somatorio = 0;
	for (int j = 0; j < 6; j++)
		somatorio += mat[I][j];
	
	//fazendo o produtório da coluna J
	float produtorio = 1;
	for (int i = 0; i < 5; i++)
		produtorio *= mat[i][J];

	//imprimindo
	cout << somatorio << endl;
	cout << produtorio << endl;


	return 0;
}

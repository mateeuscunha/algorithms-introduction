#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream input ("entrada.txt");
	float pmat[3][4], smat[3][4];
	
	//lendo as matrizes
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			input >> pmat[i][j];
	
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			input >> smat[i][j]; 

	//matriz somatorio resultante
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << (pmat[i][j] + smat[i][j]) << " ";
		cout << endl;
	}
	
	return 0;
}

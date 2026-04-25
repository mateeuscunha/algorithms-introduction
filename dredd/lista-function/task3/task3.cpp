#include <iostream>
#include <fstream>

using namespace std;

int ehMultiplo (int valor) {
	if (valor % 3 == 0) 
		return -1;
	else 
		return valor;
}

int main() {
	string arquivo;
	cin >> arquivo;
	
	ifstream input (arquivo);
	ofstream output ("saida.txt");
	
	
	int elemento;
	while (input >> elemento) {
		if (ehMultiplo(elemento) != -1) {
			output << elemento << " ";
		}
	}

	cout << endl;

	return 0;
}

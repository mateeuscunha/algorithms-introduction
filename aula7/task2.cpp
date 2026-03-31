#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string veiculo;
	float peso;
	
	
	ifstream input ("trafego");
	input >> veiculo >> peso;
	
	if ((veiculo == "Carro" and peso > 2) or (veiculo == "Caminhao" and peso > 10)) {
		cout << "EXCESSO DE PESO.";
	} else if (peso > 15) {
		cout << "PERIGO IMINENTE.";
	} else {
		cout << "PESO LIBERADO.";
	}

	return 0;
}
 

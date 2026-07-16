#include <iostream>
#include <fstream>

using namespace std;

int main() {
	float valorInicial, valorFinal;
	ifstream entradainput ("entrada");
	entradainput >> valorInicial;
	
	valorFinal = valorInicial - valorInicial*0.09;

	cout << "R$ " << valorFinal;

	return 0;
}

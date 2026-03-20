#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int dias;
	float valorLiquido;
	ifstream input ("entrada");
	ofstream output ("saida");
	
	input >> dias;
	valorLiquido = (dias*60) - ((dias*60)*0.08);
	
	output << "R$ " << valorLiquido;
	

	return 0;
}

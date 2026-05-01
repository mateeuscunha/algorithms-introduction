#include <iostream>

using namespace std;

string inserir (string insercao, string texto, unsigned posicao) {
	string resultado;
	
	for (unsigned i = 0; i < posicao; i++) //antes
		resultado += texto[i];
	
	resultado += insercao;
	
	for (unsigned i = posicao; i < texto.length(); i++)
		resultado += texto[i];
		
	return resultado;
}


int main() {
	string texto;
	cin >> texto;
	
	unsigned posicao;
	cin >> posicao;
	
	string insercao;
	cin >> insercao;

	cout << inserir(insercao, texto, posicao) << endl;
	
	return 0;
}

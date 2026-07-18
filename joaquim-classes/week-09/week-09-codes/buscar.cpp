#include <iostream>

using namespace std;

int buscar(string palavra, char busca) {
	int posicao = -1;
	unsigned i = 0; //inteiro sem sinal
	while (i < palavra.size() and palavra[i] != busca)
		i++;
	
	if (i != palavra.size())
		posicao = i;
	
	return posicao;
}

int main() {
	string s;
	char c;
	
	cin >> s >> c;
	
	cout << buscar(s, c) << endl;

	return 0;
}

#include <iostream>

using namespace std;

int dentro (string palavra, string frase) {
	int qntd = 0;
	for (unsigned i = 0; i < frase.size(); i++) {
		if (frase[i] == palavra[0]) { //o caracter na frase é igual ao primeiro da palavra
			unsigned k = 1;
			while ( (frase[i+k] == palavra[k]) and k < palavra.length() and (i+k < frase.length()) ) {
				k++;
			}
			if (k == (palavra.length()))
				qntd++;
		}
	}
	
	return qntd;
}

int main() {
	string principal, procurada;
	
	cin >> principal;
	cin >> procurada;
	
	cout << dentro(procurada, principal) << endl;

	return 0;
}

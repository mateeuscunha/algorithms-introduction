#include <iostream>

using namespace std;

/*
aaaaaaaaaJOSEaaaaaa
JOSE

SAIDA = 1
 
*/

int quantos (string original, string tag) {
	int num = -1;
	bool primeiro = true;
	
	for (unsigned i = 0; i < original.size(); i++) {
		if (original[i] == tag[0]) {
			unsigned iterador = 0;
			while ((iterador < tag.length()) and (original[i+iterador] == tag[iterador])) { 
				iterador++; //loop para ver se nao pega um caracter diferente
			}
			if (iterador == tag.size() and primeiro) {
				num = i;
				primeiro = false;
			}
		}
	}

	return num;
}

int main() {
	string original, tag;
	cin >> original;
	cin >> tag;

	cout << quantos (original, tag) << endl;

	return 0;
}

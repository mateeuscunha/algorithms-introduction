#include <iostream>

using namespace std;

string substituir(string frase, char a, char b) {
	for (unsigned i = 0; i < frase.length(); i++)
		if (frase[i] == a) 
			frase [i] = b;
	return frase;
}

int main() {
	string frase;
	char c1, c2;
	
	getline(cin, frase);
	cin >> c1;
	cin >> c2;
	
	cout << substituir(frase, c1, c2) << endl;

	return 0;
}

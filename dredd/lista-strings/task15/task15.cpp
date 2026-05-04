#include <iostream>
#include <fstream>

using namespace std;

string cesar (string frase) {
	for (unsigned i = 0; i < frase.size(); i++)
		if (frase[i] != ' ') {
			if (frase[i] == 86)
				frase[i] = 'A';
			else if (frase[i] == 87)
				frase[i] = 'B';
			else if (frase[i] == 88)
				frase[i] = 'C';
			else if (frase[i] == 89)
				frase[i] = 'D';
			else if (frase[i] == 90)
				frase[i] = 'E';
			else 
				frase[i] = frase[i] + 5;
		}
	
	return frase;
}
	

int main() {
	string arquivo;
	cin >> arquivo;
	
	ifstream input (arquivo);
	ofstream output ("cifrado.txt");
	
	string frase;
	while (getline (input, frase)) {
		output << cesar(frase) << endl;
	}
	
	return 0;
}

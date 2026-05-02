#include <iostream>

using namespace std;

int main() {
	string entrada;
	cin >> entrada;
	
	char repeter;
	unsigned num, maior;
	num = maior = 0;
	
	
	for (unsigned i = 0; i < entrada.length(); i++) {
		for (unsigned j = i; j < entrada.size(); j++) {
			if (entrada[i] == entrada[j])
				num++;
		}
		if (num >= maior) 
			repeter = entrada[i];
	}

	cout << repeter << endl;

	return 0;
}

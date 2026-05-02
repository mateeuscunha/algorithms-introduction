#include <iostream>

using namespace std;

int main() {
	string entrada;
	cin >> entrada;
	
	bool repete;
	bool primeira = true;
	char ehOcara;
	
	for (unsigned i = 0; i < entrada.size(); i++) {
		repete = false;
		for (unsigned j = (i+1); j < entrada.size(); j++) {
			if (entrada[i] == entrada[j])
				repete = true;
		}
		if (!repete and primeira) {
			primeira = false;
			ehOcara = entrada[i];
		}
	}

	cout << ehOcara << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int numPrecisa;
	cin >> numPrecisa;
	
	// lendo a lista precisa
	string *precisa = new string[numPrecisa];
	for (int i = 0; i < numPrecisa; i++)
		cin >> precisa[i];
	
	int numPossui;
	cin >> numPossui;
	
	// lendo a lista possui
	string *possui = new string[numPossui];
	for (int i = 0; i < numPossui; i++)
		cin >> possui[i];
	
	// vendo qual precisa comprar
	bool nada = true;
	
	for (int i = 0; i < numPrecisa; i++) {
		bool tem = false;
		for (int j = 0; j < numPossui; j++) 
			if (precisa[i] == possui[j])
				tem = true;
		
		if (!tem) {
			cout << precisa[i] << endl;
			nada = false;
		}
	}
					
	if (nada)
		cout << "NADA" << endl;
	
	delete [] possui;
	return 0;
}

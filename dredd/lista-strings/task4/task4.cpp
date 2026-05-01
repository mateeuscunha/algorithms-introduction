#include <iostream>

using namespace std;

bool ocorencia (char letra, string palavra) {
	bool teve = false;
	for (unsigned i = 0; i < palavra.length(); i++) {
		if (palavra[i] == letra)
			teve = true;
	}
	return teve;
}

int main() {
	//leituras
	int n;
	cin >> n;
	
	string lista[n];
	for (int i = 0; i<n; i++) 
		cin >> lista[i];
	
	char letra;
	cin >> letra;

	//percorrendo a lista
	int naoteveocorrencia = 0;
	for (int i = 0; i < n; i++)
		if ( !ocorencia(letra, lista[i]) )
			naoteveocorrencia++;
	
	cout << naoteveocorrencia << endl;
	
	return 0;
}

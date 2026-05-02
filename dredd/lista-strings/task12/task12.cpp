#include <iostream>

using namespace std;

int main() {
	unsigned num;
	cin >> num;

	string array[num];

	unsigned maior = 0;
	for (unsigned i = 0; i < num; i++) {
		cin >> array[i];
		
		if (array[i].length() > maior)
			maior = array[i].length();
	}
	
	
	
	
	
	for (unsigned j = 0; j < num; j++) {
		unsigned tamanho = array[j].length();
		string justificada = "";
		
		for (unsigned i = 0; i < (maior-tamanho); i++) // adicionando os asteriscos
			justificada += '*';
		
		for (unsigned i = 0; i < tamanho; i++)
			justificada += array[j][i];
			
		array[j] = justificada;
	}
			
	// imprimindo
	
	for (unsigned i = 0; i < num; i++)
		cout << array[i] << endl;

	return 0;
}

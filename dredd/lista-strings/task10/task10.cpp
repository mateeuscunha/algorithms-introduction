#include <iostream>
#include <cstring>

using namespace std;

void formatar (char entrada[40], char saida[40]) {
	//parte inteira
	int sizeInt = strlen(entrada) - 2;
	int j = 0;
	
	int primeirogrupo = sizeInt % 3;
	if (primeirogrupo == 0) primeirogrupo = 3;
	
	for (int i = 0; i < sizeInt; i++) {
		if (i == primeirogrupo) 
			saida[j++] = '.';
		if ((i > primeirogrupo) and (i - primeirogrupo) % 3 == 0)
			saida[j++] = '.';
		
		saida[j++] = entrada[i];
	}
	
	//parte float
	saida[j++] = ',';
	saida[j++] = entrada[(strlen(entrada) - 2)];
	saida[j++] = entrada[(strlen(entrada) - 1)];
	saida[j++] = '\0';
	
}

int main() {
	char numero[40];
	char formatado[40];
	
	cin >> numero;
	formatar(numero, formatado);
	
	cout << formatado << endl;
	


	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int numero, primeiro, ultimo, impressao;
	int condicao = 0;
	
	ifstream entrada ("numeros");
	
	while (entrada >> numero) {
		impressao = numero;
		/*pegando o primeiro e o ultimo */
		ultimo = numero % 10;
		
		while ((numero/10) != 0) {
			primeiro = numero/10;
			numero = numero /10;
		}
		/* */
		if (primeiro == ultimo) {
			cout << impressao << endl;
			condicao++;
		}
	}
	
	cout << condicao << endl;
	
	return 0;
}

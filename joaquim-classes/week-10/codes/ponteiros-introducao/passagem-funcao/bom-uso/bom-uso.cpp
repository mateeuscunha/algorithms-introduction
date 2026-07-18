#include <iostream>

using namespace std;

void multiplicaRuim (int a, int b, int &res) {
	res = a * b;
}

void multiplicaBom (int a, int b, int *res) {
	*res = a * b;
}

int main() {
	int a = 2;
	int b = 7;
	int res = 321;
	
	multiplicaRuim (a, b, res); //voce nao sabe se é copia ou referencia
	cout << "Resultado do multiplicaRuim: " << res << endl;
	
	res = 321;
	cout << "RESETANDO: res = " << res << endl;
	
	
	multiplicaBom (a, b, &res); //fica explicito que o parametro res é por referencia
	cout << "Resultado do multiplicaBom: " << res << endl;



	return 0;
}

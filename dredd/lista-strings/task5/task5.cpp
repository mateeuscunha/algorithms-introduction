#include <iostream>

using namespace std;

int main() {
	string expressao;
	cin >> expressao;
	
	int contador = 0;
	
	for (unsigned i = 0; i < expressao.length(); i++) {
		if (expressao[i] == '(')
			contador++;
		else if (expressao[i] == ')')
			contador--;
	}
		
	bool ok;
	if (contador == 0)
		ok = true;
	else 
		ok = false;
		
		
	if (ok)
		cout << "parenteses corretos" << endl;
	else 
		cout << "parenteses incorretos" << endl;

	return 0;
}

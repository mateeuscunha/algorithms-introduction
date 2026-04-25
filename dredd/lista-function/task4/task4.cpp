#include <iostream>

using namespace std;

int somaDosDigitos (int original) {
	int soma = 0;
	int digito;
	
	while (original != 0) {
		digito = original % 10;
		soma += digito;
		original /= 10;
	}
	
	return soma;
}

bool eHarshard (int num) {
	if ((num % somaDosDigitos(num) == 0)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int numLido;
	cin >> numLido;

	cout << numLido % somaDosDigitos(numLido) << " ";
	
	if (eHarshard(numLido)) 
		cout << "sim\n";
	else 
		cout << "nao\n";
	
	return 0;
}

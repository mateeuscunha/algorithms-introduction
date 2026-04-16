#include <iostream>
using namespace std;

bool capicua(int num) {
	bool capicua;
	int algarismo;
	int guardar = num;
	int revertido = 0;
	int incremento = 1;
	
	while (num != 0) {
		algarismo = num % 10;
		
		revertido = revertido * 10 + algarismo;
		
		incremento = incremento * 10;
		
		num /= 10;
	}
	
	if (revertido == guardar) {
		capicua = true;
	} else {
		capicua = false;
	}
	
	return capicua;
}

int main() {
	int quantidade, num;
	cin >> quantidade;
	
	int contador = 1;
	while (contador <= quantidade) {
		cin >> num;
		
		if (capicua(num)) {
			cout << "Capicua: " << num << endl;
		} else {
			cout << "O numero: " << num << " nao e capicua" << endl;
		}
		
		contador++;
	}
	
	cout << "acabou" << endl;
	

	return 0;
}


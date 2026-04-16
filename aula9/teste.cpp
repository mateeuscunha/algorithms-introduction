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
		
		revertido += algarismo * incremento;
		
		incremento = incremento * 10;
		
		num /= 10;
	}
	
	cout << "revertido: " << revertido << endl;
	cout << "normal: " << guardar << endl;
	
	if (revertido == guardar) {
		capicua = true;
	} else {
		capicua = false;
	}
	
	return capicua;
}


int main() {
	int num;
	cin >> num;
	
	if (capicua(num)) {
		cout << "e capicua" << endl;
	} else {
		cout << "nao e capicua" << endl;
	}
	

	return 0;
}

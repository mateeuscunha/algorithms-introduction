#include <iostream>
using namespace std;

bool capicua(int num) {
	int algarismo;
	int original = num;
	int revertido = 0;
	
	while (num != 0) {
		algarismo = num % 10;
		
		revertido = (revertido * 10) + algarismo;

		num /= 10;
	}
	
	return original == revertido;
}


int main() {
	int quantidade, num, maior, menor;
	bool primeiroCapicua = true;
	cin >> quantidade;
	
	int contador = 1;
	while (contador <= quantidade) {
		cin >> num;

		if (!capicua(num)) {
			cout << num << endl;
		} else {
			if (primeiroCapicua) {
				maior = num;
				menor = num;
				primeiroCapicua = false;
			} else {
				if (num > maior) {
					maior = num;
				} else if (num < menor) {
					menor = num;
				}
			}
		}
		
		contador++;
	}
	
	if (!(primeiroCapicua)) {
		cout << "Maior Capicua: " << maior << endl;
		cout << "Menor Capicua: " << menor << endl;
	}
	

	return 0;
}


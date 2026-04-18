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
	int num;
	cin >> num;
	
	if (capicua(num)) {
		cout << "e capicua" << endl;
	} else {
		cout << "nao e capicua" << endl;
	}
	

	return 0;
}

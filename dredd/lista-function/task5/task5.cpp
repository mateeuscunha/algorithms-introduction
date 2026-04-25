#include <iostream>

using namespace std;

string paraRomano (int n) {
	string resultado = "";
	
	while (n >= 50) { resultado += "L";    n -= 50; }
    while (n >= 40) { resultado += "XL";   n -= 40; }
    while (n >= 30) { resultado += "XXX";  n -= 30; }
    while (n >= 20) { resultado += "XX";   n -= 20; }
    while (n >= 10) { resultado += "X";    n -= 10; }
    while (n >= 9)  { resultado += "IX";   n -= 9;  }
    while (n >= 8)  { resultado += "VIII"; n -= 8;  }
    while (n >= 7)  { resultado += "VII";  n -= 7;  }
    while (n >= 6)  { resultado += "VI";   n -= 6;  }
    while (n >= 5)  { resultado += "V";    n -= 5;  }
    while (n >= 4)  { resultado += "IV";   n -= 4;  }
    while (n >= 1)  { resultado += "I";    n -= 1;  }
	
	return resultado;
}

int main() {
	int entrada = 0;
	while (entrada >= 0) {
		cin >> entrada;
		if (entrada == 0 || entrada > 50)
			cout << "NUMERO INVALIDO" << endl;
		else {
			cout << paraRomano(entrada) << endl;
		}
	}



	return 0;
}

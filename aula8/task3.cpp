#include <iostream>

using namespace std;

int main() {
	int dia, mes, ano;
	int somatorio = 0;
	
	cin >> dia >> mes >> ano;
	
	for (int i = 1; i <= mes; i++) {
		somatorio += i;
	}
	
	float ladonegro = somatorio + ((ano*0.01) * (50 - dia));
	
	if (ladonegro < 100) {
		cout << ladonegro << endl;
	} else {
		cout << 100 << endl;
	}

    return 0;
}

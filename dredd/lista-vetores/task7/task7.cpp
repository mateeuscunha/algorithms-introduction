#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string nomes[10];
	int refeicoes[10];
	
	for (int i = 0; i < 10; i++) {
		cin >> nomes[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> refeicoes[i];
	}
	
	
	for (int i = 0; i < 10; i++) {
		cout << nomes[i] << " " << refeicoes[i] - (floor(refeicoes[i]/11.0)) << endl;
	}

	return 0;
}

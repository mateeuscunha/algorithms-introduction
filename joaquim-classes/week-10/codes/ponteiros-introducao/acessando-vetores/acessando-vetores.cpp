#include <iostream>

using namespace std;

int main() {
	int vetor[10];
	for (int i = 0; i < 10; i++)
		cin >> vetor[i];
		
	int *ponteiro;
	ponteiro = vetor;
	
	cout << "PRIMEIRO ELEMENTO: " << ponteiro[0] <<	endl;
	
	for (int i = 0; i < 10; i++)
		cout << ponteiro[i] << endl;



	return 0;
}

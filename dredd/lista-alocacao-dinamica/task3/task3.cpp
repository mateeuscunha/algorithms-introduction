#include <iostream>

using namespace std;

int main() {
	int qtd;
	cin >> qtd;
	
	int *numbers = new int[qtd];
	
	for (int i=0; i < qtd; i++)
		cin >> numbers[i];
		
	int *dois = new int[qtd];
	int *tres = new int[qtd];
	int *osdois = new int[qtd];
	int cdois = 0, ctres = 0, cosdois = 0;
	
	bool algoDois = false, algoTres = false, algoOsDois = false;
	
	for (int i=0; i < qtd; i++) {
		if ((numbers[i] % 2 == 0) and (numbers[i] % 3 == 0)) {
			dois[cdois++] = numbers[i];
			tres[ctres++] = numbers[i];
			osdois[cosdois++] = numbers[i];
			
			algoOsDois = true;
			algoDois = true;
			algoTres = true;
		} else if (numbers[i] % 2 == 0) {
			dois[cdois++] = numbers[i];
			algoDois = true;			
		} else if (numbers[i] % 3 == 0) {
			tres[ctres++] = numbers[i];
			algoTres = true;			
		}
	}

	if (algoDois) {
		for (int i = 0; i < cdois; i++)
			cout << dois[i] << " ";
		cout << endl;
		}
	else
		cout << 0 << endl;
	
	if (algoTres) {
		for (int i = 0; i < ctres; i++)
			cout << tres[i] << " ";
		cout << endl;
		}
	else
		cout << 0 << endl;
	
	if (algoOsDois) {
		for (int i = 0; i < cosdois; i++)
			cout << osdois[i] << " ";
		cout << endl;
		}
	else
		cout << 0 << endl;
	

	delete[] numbers;
	delete[] dois;
	delete[] tres;
	delete[] osdois;


	return 0;
}

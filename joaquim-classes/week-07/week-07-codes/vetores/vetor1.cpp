#include <iostream>

using namespace std;

int main() {
	int vetor [10];
	
	//lendo o vetor
	for (int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	//imprimindo o vetor
	for (int j = 0; j < 10; j++) {
		cout << vetor[j] << " ";
	}
	
	cout << endl;
	
	//imprimindo o endereco de cada item do vetor
	for (int j = 0; j < 10; j++) {
		cout << &vetor[j] << " ";
	}
	
	cout << endl;
	/* 
	&vetor == vetor == &vetor[0] 
	*/

	return 0;
}

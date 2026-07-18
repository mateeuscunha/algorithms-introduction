#include <iostream>

using namespace std;
//somar e subtrair para andar na memória
int main() {
	int vetor[5] = {22, 62, 21, 15, 61};
	int *ptr = vetor;
	
	cout << *(ptr+1) << endl; //imprime o 2o elemento
	
	ptr += 2; //ptr passa a apontar para o 3o elemento
	cout << *ptr << endl;
	
	ptr--; //ptr passa a apontar para o 2o elemento;
	cout << *ptr << endl;
	
	//imprimindo todo o vetor
	
	for (int *ptV = vetor; ptV <= vetor + 4; ptV++) {
		cout << *ptV << " ";
		ptr++;
	}
	cout << endl;


	return 0;
}

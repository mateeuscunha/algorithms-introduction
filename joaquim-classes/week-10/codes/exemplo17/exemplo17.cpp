#include <iostream>
#include <cstring> //PRECISA DELA !!

using namespace std;
/*
	Vamos aprender a copiar espaços da memória com memcpy
		ESTRUTURA:
	void* memcpy (void *destino, const void *origem, size_t num_bytes);
	
	- size_t é um unsigned - inteiro sem sinal
	- void* é um ponteiro sem tipo
	- num_bytes é a quantidade de bytes a serem copiados
	- ela retorna o próprio destino
*/

int main() {
	int vetorzao[20] = {0,3,11,61,8,7,-6,2,13,47,91,12,5,4,-1,12,41,53,9,33};
	int vetor[10];
	
	memcpy ( (vetor) , (vetorzao) , (sizeof(int) * 10) );
	cout << "Após cópia 1: "; 
	for (int i = 0; i<10; i++)
		cout << vetor[i] << " ";
	cout << endl;
	
	memcpy ( (vetor), (&vetorzao[10]), (sizeof(int) * 10) );
	cout << "Após cópia 2: ";
	for (int i = 0; i <10; i++)
		cout << vetor[i] << " ";
	cout << endl;

	return 0;
}

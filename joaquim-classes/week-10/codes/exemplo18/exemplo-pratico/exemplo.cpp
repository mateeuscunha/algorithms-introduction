#include <iostream>
#include <cstdlib> //para usar atoi

using namespace std;

//calcular a média de parâmetros passados na main

int main(int argc, char *argv[]) {
	int soma = 0;
	
	// argv[0] é o nome do programa
	for (int i = 1; i < argc; i++) { //atoi converte a string em um valor inteiro
		soma += atoi(argv[i]);
	}

	// argc - 1 é o número de parâmetros sem o nome do programa
	
	cout << (float) soma / (argc-1) << endl;

	return 0;
}

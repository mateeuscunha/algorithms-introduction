#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Dado {
private:
	int chave1;
	int chave2;
	float valor1;
	char campo1[5];
	char campo2[20];
	char lixo[500];

public:
	void print(bool imprimeLixo = false) { //imprimeLixo é falso por padrão
		/* 
		  não podemos imprimir campo1 e campo2 (e lixo) diretamente,
		  porque eles não têm o caracter de final de string ('\0')
		  criamos três strings auxiliares para fazer a impressão
		*/
		char campo1aux[6];
		char campo2aux[21];
		char lixoaux[501];
		
		/*
		  não posso usar strcpy ou copiar para string pq campo1, campo2
		  não possuem carcter de término de string, precisa fazer um for
		  ou usar strncpy
		*/
		
		strncpy (campo1aux, campo1, 5);
		strncpy (campo2aux, campo2, 20);
		strncpy (lixoaux, lixo, 500);
		
		campo1aux[5] = '\0';
		campo2aux[20] = '\0';
		lixoaux[500] = '\0';
		
		cout << chave1 << " " << chave2 << " "
			 << valor1 << endl
			 << campo1aux << " " << campo2aux << endl;
			 
		if (imprimeLixo) 
			cout << lixo << endl;
		cout << endl << endl;
	}

};

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cerr << "Uso:" << endl;
		cerr << argv[0] << " arquivo" << endl;
		exit (-1);
	}
	//verificando o conteúdo do arquivo
	ifstream entrada (argv[1]);
	
	Dado d;
	Dado* ptrDado = &d;
	while ( entrada.read( (char*) (ptrDado), sizeof(Dado) ) ) {
		ptrDado -> print();
	}

	entrada.close();

	return 0;
}

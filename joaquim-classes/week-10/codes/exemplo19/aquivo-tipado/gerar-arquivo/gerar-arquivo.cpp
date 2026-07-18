#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// geração de dados aleatórios
static const char alpha[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";



// excluindo caracter de término de string
const int alphaLength = sizeof(alpha) - 1;
const int alphaNumLength = sizeof(alphanum) - 1;

// geradores aleatórios de caracter
char geraAlpha() {
	return alpha[rand() % alphaLength];
}

char geraAlphaNum() {
	return alphanum[rand() % alphaNumLength];
}

struct Dado {
private:
	int chave1;
	int chave2;
	float valor1;
	char campo1[5];
	char campo2[20];
	char lixo[500];

public:
	void preencheDado(int k) {
	chave1 = k;
	
	// preenchendo outros dados aleatoriamente
	chave2 = rand();
	
	// gera um número entre 0 e 1
	valor1 = ((float) rand()) / ((float) RAND_MAX);
	
	//gerando as strings, garantindo caracter na primeira posição
	campo1[0] = geraAlpha();
	campo2[0] = geraAlpha();
	
	for (int i = 1; i < 5; i++) 
		campo1[i] = geraAlphaNum();
			
	for (int i = 1; i < 20; i++) 
		campo2[i] = geraAlphaNum();
	
	// gerando 500 bytes aleatórios
	for (int i = 0; i < 499; i++)
		lixo[i] = rand();
	}
	
};

int main(int argc, char *argv[]) { // nome do exe, arquivo para gerar, quantidade
	if (argc != 3) {
		cerr << "Uso:" << endl;
		cerr << argv[0] << " arquivo quantidade" << endl;
		exit(-1);
	}
	ofstream saida(argv[1]);
	int qtdade = atoi(argv[2]);

	srand(time(NULL)); //gera chaves aleatórias
	Dado *ptrDado;
	
	for (int i = 0; i < qtdade; i++) {
		ptrDado = new Dado;
		ptrDado -> preencheDado(2*qtdade - 2*i); //ordem inversa
		saida.write((const char*) (ptrDado), sizeof(Dado));
		delete ptrDado;
	}
	
	return 0;
}

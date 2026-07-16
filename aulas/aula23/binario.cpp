#include <iostream>
#include <fstream>

using namespace std;
//pegar todo o conteudo
//precisamos saber o tamanho do arquivo
int main() {
	ifstream input ("texto.txt");
	input.seekg(0, input.end); //vai ate o final do arquivo (pos de escrita)
	int tam = input.tellg();
	input.seekg (0, input.beg); //volta para o início (pos de escrita)
	
	cout << tam << endl << endl;
	
	char bloco[tam];
	input.read (bloco, tam);
	cout.write (bloco, tam);
	
	return 0;
}

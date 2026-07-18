#include <iostream>
#include <fstream>

using namespace std;

struct aluno {
	char nome[20];
	int matricula;
	float notas[4];
	float media;
};

int main() {
	
	aluno alunos[3];
	
	ifstream arq ("dadosbin.dat");
	
	//recebendo os alunos
	for (int i = 0; i < 3; i++)
		arq.read( reinterpret_cast<char *> (&alunos[i]), sizeof(alunos[i]) );
		
	//imprimindo os alunos
	for (int i = 0; i < 3; i++)
		cout << alunos[i].nome << " " << alunos[i].media << endl; 
 

	return 0;
}

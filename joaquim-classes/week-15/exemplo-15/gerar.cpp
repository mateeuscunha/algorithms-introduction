#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct aluno {
    char nome[20];
    int matricula;
    float notas[4];
    float media;
};

int main() {
    aluno alunos[3];

    // Aluno 1
    strncpy(alunos[0].nome, "Carlos", 20);
    alunos[0].matricula = 1001;
    alunos[0].notas[0] = 8.0; alunos[0].notas[1] = 7.5;
    alunos[0].notas[2] = 9.0; alunos[0].notas[3] = 6.5;
    alunos[0].media = 7.75;

    // Aluno 2
    strncpy(alunos[1].nome, "Ana", 20);
    alunos[1].matricula = 1002;
    alunos[1].notas[0] = 9.0; alunos[1].notas[1] = 9.5;
    alunos[1].notas[2] = 8.5; alunos[1].notas[3] = 10.0;
    alunos[1].media = 9.25;

    // Aluno 3
    strncpy(alunos[2].nome, "Pedro", 20);
    alunos[2].matricula = 1003;
    alunos[2].notas[0] = 6.0; alunos[2].notas[1] = 5.5;
    alunos[2].notas[2] = 7.0; alunos[2].notas[3] = 6.5;
    alunos[2].media = 6.25;

    ofstream arq("dadosbin.dat", ios::binary);
    for (int i = 0; i < 3; i++)
        arq.write( reinterpret_cast<char *>(&alunos[i]), sizeof(alunos[i]) );

    arq.close();
    cout << "Arquivo criado!" << endl;
    return 0;
}

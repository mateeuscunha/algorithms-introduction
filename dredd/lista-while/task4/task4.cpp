#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nome;
    float p1, p2;
    int num_alunos;
    
    ifstream input ("entrada.txt");
    input >> num_alunos;

    ofstream output ("saida.txt");

    int iteravel = 1;
    while (iteravel <= num_alunos) {
        input >> nome;
        input >> p1;
        input >> p2;

        if (((p1 + p2) / 2) < 7.0) {
            output << nome << endl;
        }
        iteravel++;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    /*
    int vetor[4];
    vetor[0] = 5;
    vetor[1] = 10;
    */ //declarando assim, as posicoes nao atribuidas recebem lixo de memoria

    int vetor[4] = {5, 10}; /*declarando assim, os outros viram zero*/

    for (int i = 0; i < 4; i++) {
        cout << vetor[i] << endl;
    }
    
    int x = sizeof(vetor);
    cout << "O tamanho do vetor, em bytes, equivale a: " << x << endl;
    cout << "Quantidade de elementos do vetor: " << x/sizeof(int) << endl;

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
/*Com ifstream, se um arquivo não existir, ele não será criado e tentativas de leitura resultarão em erro. Então, é importante saber se a varíavel ifstream foi realmente associada a um arquivo, para isso podemos testar a varíavel segundo o código abaixo, por exemplo:*/


/*
int main() {
    if (arquivo) {
        cout << "Arquivo apto para uso";
    } else {
        cout <<  "Arquivo inapto para uso";
    }

    return 0;
} */


int main() {
    ifstream arquivo ("minha-info.txt");
    string dados;
    if(arquivo) {
        while(arquivo >> dados) { //enquanto conseguir ler os dados que estão no arquivo...
            cout << dados << endl;
        }
        arquivo.close();
    }
    return 0;
}
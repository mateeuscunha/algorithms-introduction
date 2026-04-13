#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int quantidade, producao, vendas;
    string nome, nomemaior;

    ifstream input ("estoque.txt");
    input >> quantidade;

    int finalmaior = -1;
    for(int i = 1; i<=quantidade; i++) {
        input >> nome >> producao >> vendas;
        
        int final = producao - vendas; 
        
        if (final < 50) {
            cout << nome << " " << final << " BAIXO ESTOQUE" << endl;
        } else {
            cout << nome << " " << final << endl;
        }

        if (final > finalmaior) {
            finalmaior = final;
            nomemaior = nome;
        }
    }

    cout << nomemaior << " " << finalmaior;
    
    return 0;
}
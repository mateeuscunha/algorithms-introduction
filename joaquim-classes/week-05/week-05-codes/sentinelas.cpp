#include <iostream>
using namespace std;

int main() {
    int soma = 0, cont = 0, valor;
    bool tudoOK;

    do {
        cin >> valor;
        if(valor > 0){
            cont++;
            soma += valor;
        }
        cout << "Valor: " << valor << endl << "Soma: " << soma << endl << "Contador: " << cont << endl;

        if((soma >= 200) or (cont == 20) or (valor < 0)) {
            tudoOK = false;
        } else {
            tudoOK = true;
        }

    } while (tudoOK);    
    
    return 0;
}
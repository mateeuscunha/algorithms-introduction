#include <iostream>
using namespace std;

int main() {
    int valor;
    int pares = -1;
    do {
        cin >> valor;
        if(valor % 2 == 0) {
            pares++;
        }
    } while (valor != 0);
    
    cout << pares << " pare(s) nao nulo(s) no total." << endl;
    
    
    return 0;
}
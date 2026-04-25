#include <iostream>
using namespace std;

float inclinacao(int altura, int base) {
    float res = (altura * 100.0) / base;
    return res;
}

int main() {
    int qtd, altura, base, contador, adequadas;
    cin >> qtd;
    contador = 0;
    adequadas = 0;

    while (contador < qtd) {
        cin >> altura >> base;

        cout << inclinacao(altura, base) << endl;
            
        if (inclinacao(altura, base) <= 8.001) {
            adequadas++;
        }

        contador++;
    }

    cout << adequadas << endl;
    
    return 0;
}

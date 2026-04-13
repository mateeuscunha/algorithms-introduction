#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    char funcao, medida;
    float valor;
    
    cin >> funcao;
    cin >> medida;
    cin >> valor;

    if (funcao == 's') {
        if (medida == 'r') {
            cout << fixed << setprecision(4) << sin(valor);
        } else {
            float convertido = valor * (3.1413/180);
            cout << fixed << setprecision(4) << sin(convertido);
        }
    }
    if (funcao == 'c') {
        if (medida == 'r') {
            cout << fixed << setprecision(4) << cos(valor);
        } else {
            float convertido = valor * (3.1413/180);
            cout << fixed << setprecision(4) << cos(convertido);
        }
    }
    
    return 0;
}
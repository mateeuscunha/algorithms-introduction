#include <iostream>

using namespace std;

int main() {

    int repeat;

    do {
        float b;
        int e;
        cout << "Informe um numero real(b) e um numero natural(e): " << endl;
        cin >> b >> e;

        float res = b;

        for(int i=1; i < e; i++) {
            res *= b;
        }
    
        cout << "'b' elevado a 'e' vale: " << res << endl;
        
        cout << "Gostaria calcular outra potencia?(0 para nao ou 1 para sim)" << endl;
        cin >> repeat;
    
    } while (repeat == 1);

    return 0;
}
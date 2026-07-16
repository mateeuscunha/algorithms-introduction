#include <iostream>
using namespace std;

bool Capicua(int valor) {
    int original = valor;
    long revertido = 0;
    while (valor > 0) {
        revertido = revertido * 10 + (valor % 10);
        valor /= 10;
    }
    return original == revertido;
}

int main() {
    int quant, num, maCapicua, meCapicua;
    bool primeiroCapicua = true;

    cin >> quant;

    int i = 0;
    while (i < quant) {
        cin >> num;

        if (Capicua(num)) {
            if (primeiroCapicua) {
                maCapicua = num;
                meCapicua = num;
                primeiroCapicua = false;
            } else {
                if (num > maCapicua){
                    maCapicua = num;
                } else if (num < meCapicua){
                    meCapicua = num;
                }   
                        
            }
        } else {
            cout << num << endl;
        }
        i++;
    }

    if (!primeiroCapicua) {
        cout << meCapicua << endl;
        cout << maCapicua << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int reais = 0;
    int num;
    float soma = 0;

    do {
        cin >> num;
        soma += num;
        if (num >= 0){
            reais++;
        }
        cout << "ta rodando" << endl;
    } while(num >= 0);

    cout << "Numero de reais: " << reais << " Media dos numeros indicados: " << (soma/reais) << endl;






    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char operador;
    
    cout << "Essa é a calculadora!\n" << "Digite dois números seguidos do sinal da operação que quiser efetuar.";
    cin >> n1 >> n2 >> operador;

    switch (operador)
    {
    case '+':
        cout << (n1 + n2) << endl;
        break;
    
    case '-':
        cout << (n1 - n2) << endl;
        break;
    
    case '*':
    case 'X':
    case 'x':
        cout << (n1 * n2) << endl;
        break;

    case '/':
        cout << (n1 / n2) << endl;
        break;

    default:
        cout << "Esses valores não são válidos.";
        break;
    }

    return 0;
}
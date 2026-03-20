#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float numero, quadrado, cubo, raiz;

    cin >> numero;
    quadrado = numero*numero;
    cubo = pow(numero,3);
    raiz = sqrt(numero);

    cout << quadrado << endl;
    cout << cubo << endl;
    cout << raiz << endl;

    return 0;
}
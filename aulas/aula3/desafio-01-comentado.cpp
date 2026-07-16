#include <iostream>
#include <cmath>
using namespace std;
/*fazendo desafios da lista do dredd*/

int main() {
    float numero, quadrado, cubo, raiz;

    cin >> numero; /*esta apontando para onde o dado vai*/
    quadrado = numero*numero; /* Poderia ser: quadrado = pow(numero,2); */
    cubo = pow(numero,3);
    raiz = sqrt(numero);

    cout << "O numero ao quadrado é: " << quadrado << endl; /*termine e pule uma linha*/
    cout << "O numero ao cubo é: " << cubo << endl;
    cout << "A raiz do numero é: " << raiz << endl;

    return 0;
}
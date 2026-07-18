#include <iostream>
using namespace std;

int main() {
    float n1, n2;

    cout << "Nota 1: " << endl;
    cin >> n1;

    cout << "Nota 2: " << endl;
    cin >> n2;

    float media = (n1+n2) / 2;
    bool aprovacao;

    if (media >= 6) {
        aprovacao = true;    
    } else {
        aprovacao = false;    
    }

    float freq;
    
    cout << "Qual é a frequência do aluno?(%) ";
    cin >> freq;

    if (aprovacao == true && freq > 75) {
        cout << "Passou de ano!\n";
    } else {
        cout << "Reprovou...\n";
    }

    /* operador ternário
    (media >= 5) ? cout << "Aprovado" : cout << "Reprovado"

    */

    return 0;
}


//E: && -- OU: || -- NÃO: !

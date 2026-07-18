#include <iostream>
using namespace std;

int main() {
    float nota1, nota2;
    
    cout << "Informe a nota 1: " << endl;
    cin >> nota1;
    
    cout << "Informe a nota 2: " << endl;
    cin >> nota2;
    
    float media = (nota1+nota2)/2;
    
    if (media >= 6) {
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado :(\n";    
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float peso, altura;
    char classe = 'N';
    cin >> peso >> altura;

    //primeira linha da tabela:
    if (altura < 1.2) {
        if (peso < 60) {
            classe = 'A';
        } else if (peso <= 90) {
            classe = 'D';
        } else {
            classe = 'G';
        }
    //segunda linha da tabela:
    } else if (altura <= 1.7 + 0.01) { 
        if (peso < 60) {
            classe = 'B';
        } else if (peso <= 90) {
            classe = 'E';
        } else {
            classe = 'H';
        }
    //terceira linha da tabela:
    } else {
        if (peso < 60) {
            classe = 'C';
        } else if (peso <= 90) {
            classe = 'F';
        } else {
            classe = 'I';
        }
    }
    
    cout << classe << endl;
    
    return 0;
}

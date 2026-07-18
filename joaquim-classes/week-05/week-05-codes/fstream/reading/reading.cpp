#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int num, soma;
    int qtd = 0;
    
    ifstream input ("entrada");

    if(input) {
        while(input >> num) {
            cout << num << endl;
            soma += num;
            qtd++;
        }
    } else {
        cout << "Arquivo nao pode ser aberto" << endl;
    }

    cout << "A media dos numeros e: " << soma / qtd << endl;

    return 0;
}
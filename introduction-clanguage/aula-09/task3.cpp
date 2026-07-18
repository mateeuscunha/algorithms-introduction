#include <iostream>
using namespace std;

//fatorial de um numero inteiro

int fat(int x) {
    int fatorial = 1;

    for(int i = x; i >= 1 ; i--) {
        fatorial *= i;
    }

    return fatorial;
}


int main() {
    int num;
    cout << "Informe o numero inteiro positivo para ser calculado o fatorial dele" << endl;
    cin >> num;

    cout << fat(num) << endl;

    return 0;
}
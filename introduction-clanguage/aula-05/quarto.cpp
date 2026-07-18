#include <iostream>

#define pi 3.14;
#define curtir cout << "\nCurta esse vídeo\n";

using namespace std;

void inscrever() {
    cout << "Se inscreva no canal do\n professor Douglas Maioli!\n"; //quebra de linha esse n
}

int somar(int x, int y) { //se eu quiser que o que aconteca na funcao com os parametros tambem aconteca com as variaveis fora da funcao, basta colocar, int &x
    return x + y;
}

int main() {
    inscrever();    
    inscrever();
    int a = somar(11, 9);
    cout << a << endl << "Além disso, pi sempre vale: " << pi;
    curtir;

    return 0;
}

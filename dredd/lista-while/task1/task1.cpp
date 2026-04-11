#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int menor, segmenor, maior, segmaior;
    int n = 0;

    ifstream input ("entrada.txt");
    

    //primeira leitura
    input >> n;
    menor = n;
    maior = n;
    segmenor = n;
    segmaior = n;

    //segunda leitura
    input >> n;
    if (n < menor) {
        menor = n;
        segmaior = n;
    } else {
        maior = n;
        segmenor = n;
    }


    while (input >> n) {
        if (n < menor) {
            segmenor = menor;
            menor = n;
        } else if (n < segmenor) {
            segmenor = n;
        } else if (n > maior) {
            segmaior = maior;
            maior = n;
        } else if (n > segmaior) {
            segmaior = n;
        }
    }
    
    cout << menor << endl;
    cout << segmenor << endl;
    cout << maior << endl;
    cout << segmaior << endl;
    
    return 0;
}
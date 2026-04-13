#include <iostream>
using namespace std;

int main() {
    string cor1, cor2;
    int N, primeiro, segundo, penultimo, ultimo;
    cin >> cor1;
    cin >> cor2;
    cin >> N;
    
    primeiro = N / 100000;
    segundo = (N / 10000) % 10;
    penultimo = (N % 100) / 10;
    ultimo = N % 10;

    if ((primeiro == ultimo) and (segundo == penultimo))
        cout << cor1;
    else 
        cout << cor2;
    
    return 0;
}
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    int N;

    ifstream entrada ("senha.txt");
    ofstream saida ("saida.txt");
    entrada >> N;
    

    int n = 0;
    int mersenne = 0;

    while (mersenne < N) {
        mersenne = (pow(2, n) -1);
        if (mersenne <= N) {
            saida << mersenne << " ";
        }
        n++;
    }

    return 0;
}
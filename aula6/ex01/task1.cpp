#include <iostream>
#include <fstream>

using namespace std;


int main(){

    int a, b, c1, c2, c3, c4, c5, c6;
    
    ifstream entrada ("entrada.txt");
    entrada >> a;
    entrada >> b;

    ofstream saida ("saida.txt");
    
    c1 = (a/100000) % 10;
    c2 = (a/10000) % 10;
    c3 = (a/1000) % 10;
    c4 = (a/100) % 10;
    c5 = (a/10) % 10;
    c6 = a % 10;

    saida << c1 % b << c2 % b << c3 % b << c4 % b << c5 % b << c6 % b;

    return 0;
}

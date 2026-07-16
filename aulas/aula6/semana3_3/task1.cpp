#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;


int main(){

    int a, b, c;
    
    ifstream entrada ("entrada.txt");
    entrada >> a >> b;

    ofstream saida ("saida.txt");
    
    c = (a/100000) % b;

    saida << c << endl;

    return 0;
}
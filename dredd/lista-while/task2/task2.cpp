#include <iostream>
#include <fstream>
using namespace std;

int triangular(int n) {
    int res = 0;
    res = ((n*(n+1)) / 2);
    return res;
}


int main() {
    int n;
    ifstream input ("entrada.txt");
    input >> n;

    ofstream output ("saida.txt");
    output << triangular(n) << endl;

    return 0;
}
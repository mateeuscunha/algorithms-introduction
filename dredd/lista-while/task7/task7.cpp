#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string arquivo;
    int num1, num;
    cin >> arquivo;
    
    ifstream input (arquivo);
    input >> num1;

    int dobro = 0;
    while (input >> num) {
        if (num == num1 * 2) {
            dobro += 1;
        }
        num1 = num;
    }

    ofstream output ("dobro.txt");
    output << dobro;
    
    return 0;
}
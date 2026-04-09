#include <iostream>
using namespace std;

int main () {
    char conceito;
    float nt, na, ne, média;
    cin >> nt;
    cin >> na;
    cin >> ne;

    média = ((nt*2) + (na*3) + (ne*5)) / 10;

    if (média < 5) {
        conceito = 'E';
    } else if (média < 6) {
        conceito = 'D';
    } else if (média < 7) {
        conceito = 'C';
    } else if (média < 8) {
        conceito = 'B';
    } else {
        conceito = 'A';
    }

    
    cout << média << endl << conceito << endl;
    
    return 0;
}
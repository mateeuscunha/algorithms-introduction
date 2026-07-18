#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if (n1 < (n2 + n3) and n2 < (n1 + n3) and n3 < (n1 + n2)) {
        if ((n1 == n2) and (n1 == n3)) {
            cout << "Triângulo equilátero" << endl;
        } else if ((n1 == n2) or (n2 == n3) or (n1 == n3)) {
            cout << "Triângulo isósceles" << endl;
        } else {
            cout << "Triângulo escaleno" << endl;
        }
    } else {
        cout << "Não é possível formar triângulo com esses valores" << endl;
    }
    
    return 0;
}
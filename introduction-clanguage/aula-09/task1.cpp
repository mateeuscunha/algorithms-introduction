#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, res;
    cout << "Informe o numero a: " << endl;
    cin >> a;

    res = (pow(a,2)) - (3*a) + 5;

    cout << "O resultado desse numero na funcao: f(a) = a^2 - 3a + 5; e igual a: " << res << endl;

    return 0;
}
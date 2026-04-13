#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;
    char simbolo;
    cin >> n1 >> n2 >> simbolo;

    if(simbolo == '+') {
        res = n1 + n2;
    } else if(simbolo == '-') {
        res = n1 - n2;
    } else if(simbolo == '*') {
        res = n1 * n2;
    } else if(simbolo == '/') {
        res = n1 / n2;
    } 
    
    cout << res;

    return 0;
}

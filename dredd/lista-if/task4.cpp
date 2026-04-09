#include <iostream>
using namespace std;

int main() {
    int idade, grupo;
    float peso;

    cin >> idade;
    cin >> peso;
    
    if ((idade < 20) and (peso <= 60)) {
        grupo = 9;
    } else if ((idade < 20) and (peso <= 90)) {
        grupo = 8;
    } else if ((idade < 20) and (peso > 90)) {
        grupo = 8;
    }  else if ((idade <= 50) and (peso <= 60)) {
        grupo = 6;
    } else if ((idade <= 50) and (peso <= 90)) {
        grupo = 5;  
    } else if ((idade <= 50) and (peso > 90)) {
        grupo = 4;   
    } else if ((idade > 50) and (peso <= 60)) {
        grupo = 3;
    } else if ((idade > 50) and (peso <= 90)) {
        grupo = 2;
    } else {
        grupo = 1;
    }

    
    cout << grupo << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;

    int soma = 0;
    int contador = 1;

    /*  WHILE   */

    while(contador <= n) {
        soma += contador;
        contador ++;
    }

    
   
    /*  DO WHILE
    
    do {
       soma += contador;
       contador ++;
    } while (contador <= n);

    */

    /*  FOR
    
    for (int j=1; j<=n; j++) {
        soma += j;
    }
        
    */

    
    cout << "Soma dos numeros de 0 ate " << n << " = " << soma << endl;
    
    return 0;
}
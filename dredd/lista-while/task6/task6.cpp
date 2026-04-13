#include <iostream>
#include <fstream>
using namespace std;

int main() {
   double valor;
   int dia;
   char categoria;

   ifstream input ("ingresso.txt");
   input >> valor;

   double vendas = 0;
   while (input >> dia) {
        input >> categoria;
 
        //dia 6 ao 13
        if ((dia >= 6) and (dia <= 13)){
            if (categoria == 'E') {
                vendas += valor * 0.85;
            } else {
                vendas += valor * 0.9;
            }
        } else if ((dia >= 14) and (dia <= 24)){ //dia 14 ao 24
            if (categoria == 'E') {
                vendas += valor * 0.9;
            } else {
                vendas += valor * 0.95;
            }
        } else if ((dia < 6) or (((dia > 24)) and (dia <= 31))) { //dias sem desconto
            vendas += valor;
        }
   }

   cout << vendas;
    
    return 0;
}
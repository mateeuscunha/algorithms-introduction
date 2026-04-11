#include <iostream>
using namespace std;

bool tudoOK(int produto, int pais) {
    bool okproduto = false;
    bool okpais = false;

    if ((produto >= 1) and (produto <= 10)) {
        okproduto = true;
    }

    if ((pais >= 1) and (pais <= 3)) {
        okpais = true;
    }

    if (okproduto and okpais) {
        return true;
    } else {
        return false;
    }

}


int main() {
    int produto, pais;
    float peso;
    
    cin >> produto;
    cin >> peso;
    cin >> pais;
    
    if(tudoOK(produto, pais)) {
        float gramas = peso * 1000;
        float bruto;
        float imposto;
        float preco;

        //calculo preco bruto
        if ((produto >= 1) and (produto <= 4)) {
            bruto = (gramas * 10);
        } else if ((produto >= 5) and (produto <= 7)) {
            bruto = (gramas * 25);
        } else {
            bruto = (gramas * 35);
        }

        //calculo imposto sobre o produto
        if (pais == 1) {
            imposto = 0 * bruto;
        } else if (pais == 2) {
            imposto = 0.15 * bruto;
        } else {
            imposto = 0.25 * bruto;
        }

        //calculo preco total
        preco = bruto + imposto;
        
        //imprimindo
        cout << gramas << endl;
        cout << bruto << endl;
        cout << imposto << endl;
        cout << preco << endl;
    }
    
    return 0;
}
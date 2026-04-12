#include <iostream>
using namespace std;

float mtoc(float metros) {
    float centimetros;

    centimetros = metros * 100.0;
    
    return centimetros;
}

float ctom(float centimetros) {
    float metros = centimetros / 100.0;
    return metros;
}

int main() {
    float distancia;
    string converter;

    cin >> distancia;
    cin >> converter;
    
    if (converter == "metro") {
        cout << ctom(distancia) << " m" << endl;
    } else if (converter == "centimetro") {
        cout << mtoc(distancia) << " cm" << endl;
    } else {
        cout << "ERRO" << endl;
    }
    
    return 0;
}
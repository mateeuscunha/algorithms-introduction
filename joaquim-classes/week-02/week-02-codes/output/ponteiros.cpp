#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 5;
    float f = 23.2;
    string s = "teste"; /*variaveis*/

    int* ptrI = &i;
    float *ptrF = &f;
    string* ptrS = &s; /*ponteiros*/

    cout << "Usando as variáveis: ";
    cout << i << " " << f << " " << s << endl;
    
    cout << "Usando ponteiros: ";
    cout << *ptrI << " " << *ptrF << " " << *ptrS << endl;

    cout << "Endereço das variáveis: ";
    cout << &i << " " << &f << " " << &s << endl;

    cout << "Valor dos ponteiros: ";
    cout << ptrI << " " << ptrF << " " << ptrS << endl;

    return 0;
}

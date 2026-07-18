#include <iostream>

using namespace std;

int main() {
    int var1;
    int* pont1; /*tipo da variável que ele vai apontar*/

    var1 = 5;
    
    pont1 = &var1; /*vinculando o ponteiro à variável*/
    
    cout << "Valor da variavel atraves do seu nome: " << var1 << endl;
    cout << "Valor da variavel atraves do ponteiro: " << *pont1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl;

    int var2;
    var2 = *pont1; /*var2 recebe o valor da var1*/

    var2 = 50;
    cout << var2 << endl;

    int* pont2; /*se nao declarar, ele aponta pra algum lugar aleatorio*/
    pont2 = NULL; /*declarei para apontar pro vazio*/
    cout << pont2 << endl;

    int* pont3 = new int; /*ta apontando pra um lugar novo na memoria*/
    *pont3 = 35;
    cout << *pont3 << endl; /*unica forma de acessar o 35*/

    delete pont3; /*deleta antes para evitar o vazamento de memória*/
    pont3 = pont1;
    cout << *pont3 << endl;

    return 0;
}
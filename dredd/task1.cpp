#include <iostream> 
using namespace std;

int main() {
    int ano;
    bool bissexto;

    cin >> ano;

    if (((ano % 400) == 0) or ((ano % 4) == 0 && ((ano % 100) != 0))) {
        bissexto = true;
    } else {
        bissexto = false;
    } 

    cout << bissexto << endl;

    return 0;
}
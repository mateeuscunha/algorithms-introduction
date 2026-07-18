#include <iostream>
using namespace std;

int main() {
    int idade, renda;
    cout << "Informe sua idade e renda: " << endl;
    cin >> idade >> renda;

    if(idade >= 21 && renda < 1200) {
        cout << "Voce pode participar desse programa!";
    } else {
        cout << "Voce nao pode participar desse programa :(";
    }
    
    return 0;
}
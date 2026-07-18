#include <iostream>
using namespace std;

int main() {
    float n1, n2;

    cout << "Informe sua primeira nota: " << endl;
    cin >> n1;
    
    cout << "Informe sua segunda nota: " << endl; 
    cin >> n2;

    float media = (n1+n2) / 2;
    
    if (media < 2.5) {
        cout << "Aluno classe D" << endl;
    } else if(media < 5) {
        cout << "Aluno classe C" << endl;    
    } else if(media < 7.5) {
        cout << "Aluno classe B" << endl;
    } else {
        cout << "Aluno classe A" << endl;    
    }

    return 0;
}

#include <iostream> 
using namespace std;

int main() {
    double a, b;
    int x;
    
    cin >> a >> b >> x;

    switch(x) {
        case 1:
            cout << (a+b) / 2 << endl;
            break;
        
        case 2:
            if (a<b) {
                cout << b - a << endl;
            } else {
                cout << a - b << endl;
            }
            break;

        case 3:
            cout << a*b << endl;
            break;
        
        case 4:
            if (b == 0) {
                cout << "ERRO" << endl;
            } else {
                cout << a/b << endl;
            }
            break;

        default: 
            cout << "ERRO" << endl;

    }
    
    return 0;
}
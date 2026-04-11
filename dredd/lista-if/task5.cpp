#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    if (n4 <= n1) {
        cout << n4 << " ";
        cout << n1 << " ";
        cout << n2 << " ";
        cout << n3 << " ";
    } else if (n4 <= n2) {
        cout << n1 << " ";
        cout << n4 << " ";
        cout << n2 << " ";
        cout << n3 << " ";
    } else if (n4 <= n3) {
        cout << n1 << " ";
        cout << n2 << " ";
        cout << n4 << " ";
        cout << n3 << " ";
    } else {
        cout << n1 << " ";
        cout << n2 << " ";
        cout << n3 << " ";
        cout << n4 << " ";
    }
    
    return 0;
}
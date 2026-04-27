#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matriz[6][6], resultado[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++)
            cin >> matriz[i][j];
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            int ir = abs(i - 5);
            int ij = abs(j - 5);
            resultado[ir][ij] = matriz[i][j];
        }
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
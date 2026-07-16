#include <iostream>
using namespace std;

int main() {
    float capacidade, volume;
    int min = 0;

    cin >> capacidade;

    volume = 0.1*capacidade;

    while(volume < capacidade) {
        volume -= 0.03*volume;
        volume += (0.05*capacidade) + 10;
        min += 30;
    }
    
    cout << min << endl;    
    
    return 0;
}

#include <iostream> 
using namespace std;

int main() {
    float massa;
    cin >> massa;
    int seg = 0;

    while(massa >= 0.1) {
        massa = massa - (0.25*massa);
        seg += 30;
    }
    
    int horas = seg / 3600;
    seg = seg % 3600;

    int minutos = seg / 60;
    seg = seg % 60;
    


    cout << "O tempo necessario para que a massa fique menor que 0.10 gramas e igual a: " << horas << ":" << minutos << ":" << seg << endl;
    
    return 0;
}
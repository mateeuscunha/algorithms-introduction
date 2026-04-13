#include <iostream> 
using namespace std;

int main() {
    float extras, faltas, H;
    int premio;
    cin >> extras;
    cin >> faltas;
    
    H = (extras - ((2.0/3) * faltas)) * 60; //tem que passar pra minutos
    
    if (H <= 600) {
        premio = 100;
    } else if (H <= 1200) {
        premio = 200;
    } else if (H <= 1800) {
        premio = 300;
    } else if (H <= 2400) {
        premio = 400;
    } else {
        premio = 500;
    }
    
    cout << premio << endl;
    
    return 0;
}
#include <iostream> 
#include <fstream> 

using namespace std;


int main() {
    float c, k, f;

    cin >> c;
    
    k = c + 273;
    f = (1.8*c) + 32;

    cout << k << " K" << endl << f << " F" << endl;



    return 0;
}

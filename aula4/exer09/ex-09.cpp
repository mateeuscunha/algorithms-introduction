#include <iostream> 
#include <fstream> 

using namespace std;


int main() {
    float c, k, f;

    ofstream saida ("temperatura.txt");   

    cin >> c;
    
    k = c + 273;
    f = (1.8*c) + 32;

    saida << k << " K" << endl << f << " F" << endl;



    return 0;
}

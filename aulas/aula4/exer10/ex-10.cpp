#include <iostream> 

using namespace std;


int main() {
    float avista, prestacoes, antes, depois;

    cin >> avista >> prestacoes;

    antes = avista*1.1;

    depois = avista*0.99;

    cout << antes << endl << depois << endl;

    return 0;
}
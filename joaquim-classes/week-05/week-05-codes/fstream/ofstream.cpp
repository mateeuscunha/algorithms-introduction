#include <fstream>

using namespace std;

int main() {
    
    ofstream arquivoentrada ("meus-dados.txt"); //ofstream é saída
    arquivoentrada << "Escrevendo no arquivo..." << endl;
    arquivoentrada.close(); //redundante mas é bom
    
    return 0; 
}
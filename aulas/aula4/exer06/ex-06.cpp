#include <iostream> 
#include <fstream>
#include <cmath>


using namespace std;
int main(){
	float numero;
		
	cin >> numero;
	
	ofstream output ("saida.txt");
	
	output << floor(numero) << endl << (numero - floor(numero)) << endl << floor(numero) << endl << ceil(numero) << endl << round(numero) << endl;

	return 0;
}

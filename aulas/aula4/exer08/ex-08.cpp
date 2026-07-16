#include <iostream>
#include <fstream>

using namespace std;
int main(){
	int valor, cem, cinq, dez;
	
	cin >> valor;
	
	ofstream output ("saque.txt");
	
	cem = valor / 100;
	cinq = (valor % 100) / 50;
	dez = (valor % 50) / 10;
	
	output << cem << endl << cinq << endl << dez << endl;
	
	output.close();
	
	return 0;
}

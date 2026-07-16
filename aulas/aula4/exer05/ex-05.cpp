#include <iostream>
#include <fstream>


using namespace std;

int main(){
	float real, dolar, euro, libra;
	
	cin >> real;

	ofstream output ("salario.txt");


	dolar = real / 2.13;
	euro = real / 2.84;
	libra = real / 3.34;
	
	output << dolar << endl << euro << endl << libra << endl;
	
	output.close();
	
	return 0;
}

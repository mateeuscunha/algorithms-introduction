#include <iostream>
#include <fstream>
using namespace std;
//11% total animais
int main(){
	int pop; 
	double a1, a2, a3, a4;
	
	ifstream input ("fauna");
	input >> pop;
	
	a1 = 0.11*pop;
	a2 = a1 - (0.27*a1);
	a3 = a1/3;
	a4 = a2/4;
	
	ofstream output ("registros");
	output << (int)a1 << endl << (int)a2 << endl << (int)a3 << endl << (int)a4 << endl;
	
	return 0;
}

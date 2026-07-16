#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int homens, caravelas, excedente;
	
	ifstream input ("homens.txt");
	input >> homens;
	input.close();
	
	ofstream output ("caravelas.txt");
	
	excedente = homens - 1000;
	
	caravelas = (excedente + 79) / 80; 

	output << caravelas;

	return 0;
}

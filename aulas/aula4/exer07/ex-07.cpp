#include <iostream> 
#include <fstream> 

using namespace std;
int main(){
	float base, alt, area;
	
	ifstream input ("triangulo.txt");
	ofstream output ("saida.txt");
	
	input >> base >> alt;
	
	area = (base * alt) / 2;
	
	output << area;
	
	return 0;
}

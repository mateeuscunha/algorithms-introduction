#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int valor, primo1, primo2, primo3, n1, n2, n3;
	
	cin >> valor;
	
	ifstream input ("chaves.txt");
	ofstream output ("codigo.txt");
	
	input >> primo1 >> primo2 >> primo3;
	
	n1 = valor % primo1;
	n2 = valor % primo2;
	n3 = valor % primo3;
	
	
	output << n1 << endl << n2 << endl << n3 << endl;
	
	return 0;
}

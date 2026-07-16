#include <iostream>
#include <fstream>

using namespace std;
int main(){
	float salario, saque1, saque2, saldo;
	
	ifstream input ("movimentacao");
	input >> salario >> saque1 >> saque2;
	
	saldo = salario - (saque1*1.0038) - (saque2*1.0038);
	
	ofstream output ("saldo");
	output << saldo;	
	
	return 0;
}

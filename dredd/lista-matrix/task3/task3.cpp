#include <iostream>
#include <fstream>

using namespace std;
// 5 produtos em 3 lojas diferentes
int main() {
	ifstream input ("vendas.txt");
	ofstream output ("saida.txt");
	
	int mes1[5][3], mes2[5][3], bimestre[5][3];
	
	for (int i = 0; i < 5; i++) { //LENDO MES1
		for (int j = 0; j < 3; j++) {
			input >> mes1[i][j];
		}
	}
	
	for (int i = 0; i < 5; i++) { //LENDO MES2 
		for (int j = 0; j < 3; j++) {
			input >> mes2[i][j];
		}
	}

	for (int i = 0; i < 5; i++) { //FAZENDO BIMESTRE
		for (int j = 0; j < 3; j++) {
			bimestre[i][j] = mes1[i][j] + mes2[i][j];
		}
	}

	//vendas de cada produto no bimestre
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			output << bimestre[i][j] << "		";
		}
		output << endl;
	}
	
	//o numero de vendas do produto mais vendido
	
	int maior = bimestre[0][0];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (bimestre[i][j] > maior)
				maior = bimestre[i][j];
		}
	}
	
	output << maior << endl;
	
	//total vendido por loja
	
	int l1, l2, l3;
	l1 = l2 = l3 = 0;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) 
				l1 += bimestre[i][j];
			else if (j == 1)
				l2 += bimestre[i][j];
			else
				l3 += bimestre[i][j];
		}
	}
	
	output << l1 << " " << l2 << " " << l3 << " " << endl;

	//total vendido de cada produto
	
	int p1, p2, p3, p4, p5;
	p1 = p2 = p3 = p4 = p5 = 0;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) 
				p1 += bimestre[i][j];
			else if (i == 1)
				p2 += bimestre[i][j];
			else if (i == 2)
				p3 += bimestre[i][j];
			else if (i == 3)
				p4 += bimestre[i][j];
			else 
				p5 += bimestre[i][j];
		}
	}
	
	output << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	

	return 0;
}

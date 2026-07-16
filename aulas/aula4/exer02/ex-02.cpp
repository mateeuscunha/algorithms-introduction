#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main() {
	ifstream entrada ("entrada.txt");
	ofstream saida ("degraus.txt");
	
	float alturaDegrau, alturaAlcancada;
	int quantidadeDegraus; /*quero que arredonde para cima*/
	
	entrada >> alturaDegrau >> alturaAlcancada;
	
	alturaAlcancada = alturaAlcancada * 100; /*alturaAlcancada *= 100;*/
	
	quantidadeDegraus = ceil(alturaAlcancada / alturaDegrau);
	
	saida << quantidadeDegraus << endl;
	
	
		
	return 0;
}

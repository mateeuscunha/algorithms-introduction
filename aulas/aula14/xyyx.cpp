#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	unsigned qtd;
	cin >> qtd;
	
	string palavras[qtd]; //lendo todas as palavras
	for (unsigned i = 0; i < qtd; i++)
		cin >> palavras[i];
		
	
	string categoria1[qtd], categoria2[qtd];
	unsigned cat1, cat2;
	cat1 = cat2 = 0;
	
	for (unsigned iterador = 0; iterador < qtd; iterador++) {
		
		unsigned tamanho = palavras[iterador].size();
		string palavra = palavras[iterador];
		
		if (tamanho % 2 == 0) { //par
			string metade1 = "";
			string metade2 = "";
			for (unsigned i = 0; i < tamanho/2; i++)
				metade1 += palavra[i];
			for (unsigned i = tamanho/2; i < tamanho; i++)
				metade2 += palavra[i];
			
			//ordenando as metades
			sort(metade1.begin(), metade1.end());
			sort(metade2.begin(), metade2.end());
			
			if (metade1 == metade2)
				categoria1[cat1++] = palavra;
			else
				categoria2[cat2++] = palavra;
			
		} else { //impar
			string metade1 = "";
			string metade2 = "";
			for (unsigned i = 0; i < tamanho/2; i++)
				metade1 += palavra[i];
			for (unsigned i = (tamanho/2 + 1); i < tamanho; i++)
				metade2 += palavra[i];
				
			//ordenando as metades
			sort(metade1.begin(), metade1.end());
			sort(metade2.begin(), metade2.end());
			
			if (metade1 == metade2)
				categoria1[cat1++] = palavra;
			else
				categoria2[cat2++] = palavra;
		}
	}
	
	//ordenando categoria1 por tamanho crescente
	for (unsigned i = 0; i < cat1; i++) {
		for (unsigned j = i + 1; j < cat1; j++) {
			if (categoria1[i].size() > categoria1[j].size()) {
				string temp = categoria1[i];
				categoria1[i] = categoria1[j];
				categoria1[j] = temp;
			}
		}
	}
	
	//ordenando categoria2 por tamanho crescente
	for (unsigned i = 0; i < cat2; i++) {
		for (unsigned j = i + 1; j < cat2; j++) {
			if (categoria2[i].size() > categoria2[j].size()) {
				string temp = categoria2[i];
				categoria2[i] = categoria2[j];
				categoria2[j] = temp;
			}
		}
	}
	
	
	for (unsigned i = 0; i < cat1; i++)
		cout << categoria1[i] << endl;
	
	for (unsigned i = 0; i < cat2; i++)
		cout << categoria2[i] << endl;


	return 0;
}

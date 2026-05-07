#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	string categoria1[num], categoria2[num];
	unsigned cat1, cat2;
	cat1 = cat2 = 0;
	
	string palavra;
	for (int i = 0; i < num; i++) {
		cin >> palavra;
		unsigned tamanho = palavra.size();
		
		if (tamanho % 2 == 0) { //par
			bool repete1, repete2;
			repete1 = repete2 = false;
			
			for (unsigned j = 0; j < tamanho/2; j++) //percorrendo a primeira metade
				for (unsigned k = tamanho/2; k < tamanho; k++) { //percorrendo a segunda metade
					if ((!repete1) and (palavra[j] == palavra[k])) //se nao repetiu nenhuma e e igual
						repete1 = true;
					else if ((repete1) and (palavra[j] == palavra[k])) //se repetiu uma e e igual
						repete2 = true;
				}
			
			if ((repete1) and (!repete2))
				categoria1[cat1++] = palavra;
			else
				categoria2[cat2++] = palavra;
				
		} else { //impar 
			bool repete1, repete2;
			repete1 = repete2 = false;
			
			for (unsigned j = 0; j < tamanho/2; j++) //percorrendo a primeira metade
				for (unsigned k = (tamanho/2 + 1); k < tamanho; k++) { //percorrendo a segunda metade
					if ((!repete1) and (palavra[j] == palavra[k])) //se nao repetiu nenhuma e e igual
						repete1 = true;
					else if ((repete1) and (palavra[j] == palavra[k])) //se repetiu uma e e igual
						repete2 = true;
				}
				
			if ((repete1) and (!repete2))
				categoria1[cat1++] = palavra;
			else
				categoria2[cat2++] = palavra;
		}
	}
	
	//IMPRESSOES
	cout << endl << "CATEGORIA 1: " << endl; 
	for (unsigned i = 0; i < cat1; i++)
		cout << categoria1[i] << endl;
	
	cout << endl << "CATEGORIA 2: " << endl;	
	for (unsigned i = 0; i < cat2; i++)
		cout << categoria2[i] << endl;

	return 0;
}

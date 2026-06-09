#include <iostream>
#include <fstream>

using namespace std;

struct Pokemon {
	string nome;
	string primario;
	string secundario;
	int cp;
};

int main() {
	ifstream entrada ("dados.txt");
	
	string tipo_busca;
	int cp_minimo;
	cin >> tipo_busca >> cp_minimo;
	
	Pokemon *vet = new Pokemon[4];
	
	int pos = 0;
	int capacidade = 4;
	Pokemon alfa;
	while (entrada >> alfa.nome) {
		if (pos < capacidade) {
			entrada >> alfa.primario >> alfa.secundario >> alfa.cp;
			vet[pos++] = alfa;
		}
		else {
			Pokemon *aux = new Pokemon[capacidade+2];
			copy(vet, vet+capacidade, aux);
			capacidade += 2;
			delete [] vet;
			vet = aux;
			
			entrada >> alfa.primario >> alfa.secundario >> alfa.cp;			
			vet[pos++] = alfa;
		}
	}
	
	int valido = 0;
	for (int i = 0; i < pos; i++) {
		Pokemon analisado = vet[i];
		bool tipoOK = false;
		bool cpOK = false;
		
		if ((analisado.primario == tipo_busca) or (analisado.secundario == tipo_busca))
			tipoOK = true;
		if (analisado.cp >= cp_minimo)
			cpOK = true;
			
		if (tipoOK and cpOK)
			valido++;
	}
	
	cout << capacidade << " " << pos << endl;
	cout << valido << endl;

	entrada.close();
	delete [] vet;
	return 0;
}

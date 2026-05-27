#include <iostream>

using namespace std;

struct dat {
	int dia;
	int mes;
	int ano;
};

struct pessoa {
	string nome;
	dat nasc;
};

int main() {
	int qtd;
	cin >> qtd;
	
	pessoa velho;
	bool primeiro = true;
	for (int i = 0; i < qtd; i++) {
		pessoa alfa;
		cin >> alfa.nome >> alfa.nasc.dia >> alfa.nasc.mes >> alfa.nasc.ano;
		if (primeiro) {
			velho = alfa;
			primeiro = false;
		} else {
			if (alfa.nasc.ano < velho.nasc.ano)
				velho = alfa;
			else if ((alfa.nasc.ano == velho.nasc.ano) and (alfa.nasc.mes < velho.nasc.mes))
				velho = alfa;
			else if ((alfa.nasc.ano == velho.nasc.ano) and (alfa.nasc.mes == velho.nasc.mes) and (alfa.nasc.dia < velho.nasc.dia))
						velho = alfa;
		}
	}
	
	cout << velho.nome << endl;
	
	return 0;
}

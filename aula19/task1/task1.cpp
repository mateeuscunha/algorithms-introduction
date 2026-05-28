#include <iostream>

using namespace std;

struct vilao {
	string nome;
	string alvo;
};

struct plano {
	string nome;
	string nomeVilao;
	int prejuizo;
};

int main() {
	int viloes;
	cin >> viloes;
	vilao vetViloes[viloes];
	
	for (int i = 0; i < viloes; i++) {
		vilao mal;
		cin >> mal.nome >> mal.alvo;
		vetViloes[i] = mal;
	}
	


	int planos;
	cin >> planos;
	plano vetPlanos[planos];
	
	for (int i = 0; i < planos; i++) {
		plano operation;
		cin >> operation.nome >> operation.nomeVilao >> operation.prejuizo;
		vetPlanos[i] = operation;
	}
	


	string alfa;
	cin >> alfa;
	
	bool imprimiuAlgo = false;
	for (int i = 0; i < viloes; i++) {
		if (vetViloes[i].alvo == alfa) {
			for (int j = 0; j < planos; j++)
				if (vetPlanos[j].nomeVilao == vetViloes[i].nome) {
					cout << vetPlanos[j].nome << " " << vetPlanos[j].prejuizo << endl;
					imprimiuAlgo = true;
				}
		}
	}

	if(!imprimiuAlgo)
		cout << -1 << endl;

	return 0;
}

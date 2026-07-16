#include <iostream>

using namespace std;

struct sabre {
	string cristal;
	string cor;
};

struct jedi {
	string nome;
	string hierarquia;
	sabre arma;
};

int main() {
	int jedis;
	cin >> jedis;
	string vetHierarquia[3] = {" ", " ", " "};
	int qtd = 0;
	
	jedi vetJedis[jedis];
	for (int i = 0; i < jedis; i++) {
		jedi cara;
		cin >> cara.nome >> cara.hierarquia >> cara.arma.cristal >> cara.arma.cor;
		
		// pegando a hierarquia
		bool estaNoVetor = false;
		for (int j = 0; j < 3; j++)
			if (vetHierarquia[j] == cara.hierarquia)
				estaNoVetor = true;
			
		if (!estaNoVetor)
			vetHierarquia[qtd++] = cara.hierarquia;
		
		//guardando o jedi
		vetJedis[i] = cara;
	}

	string corAlfa;
	cin >> corAlfa;
	
	for (int i = 0; i < 3; i++) {
		if (vetHierarquia[i] != " ") {
			cout << endl << vetHierarquia[i] << " ";
			for (int j = 0; j < jedis; j++) {
				if ((vetJedis[j].arma.cor == corAlfa) and (vetJedis[j].hierarquia == vetHierarquia[i]))
					cout << vetJedis[j].nome << " ";
			}
		}
	}
	
	
	return 0;
}

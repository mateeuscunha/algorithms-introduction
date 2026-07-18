#include <iostream>

using namespace std;

struct Carro {
	string nome;
	string cor;
	int pot;
	int velMax;
	
	void insere (string STnome, string STcor, int STpot, int STvelMax) {
		nome = STnome;
		cor = STcor;
		pot = STpot;
		velMax = STvelMax;
	}
	
	void mostra () {
	cout << "Nome.............: " << nome << endl;
	cout << "Cor..............: " << cor << endl;
	cout << "Potencia.........: " << pot << endl;
	cout << "Velocidade Maxima: " << velMax << endl << "\n";
	}
	
	void mudaVel (int vel) {
		if (vel > velMax)
			velMax = vel;
	}
};

int main() {
	
	Carro car1;
	
	car1.insere("Tornado", "Vermelho", 450, 350);
	car1.mostra();
	
	cout << endl;
	
	Carro car2;
	
	car2.insere("Luxo", "Preto", 230, 200);
	car2.mostra();
	
	//mudando a velMax do car1
	
	car1.mudaVel(800);
	car1.mostra();
	
	return 0;
}

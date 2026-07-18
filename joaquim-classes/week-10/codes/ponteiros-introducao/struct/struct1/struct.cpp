#include <iostream>

using namespace std;

struct Atirador {
	int numero;
	string nome;
	unsigned gc;
};
	
int main() {
	//registrando Mateus
	Atirador mateus;
	
	mateus.numero = 62;
	mateus.nome = "Cunha";
	mateus.gc = 7;
	
	cout << "O atirador " << mateus.nome;
	cout << ", cujo número é " << mateus.numero;
	cout << ", é do gc: " << mateus.gc << endl;

	cout << endl << endl;
	
	//registrando Gabriel
	
	Atirador gabriel;
	
	gabriel.numero = 21;
	gabriel.nome = "Ribeiro";
	gabriel.gc = 3;
	
	cout << "O atirador " << gabriel.nome;
	cout << ", cujo número é " << gabriel.numero;
	cout << ", é do gc: " << gabriel.gc << endl;


	return 0;
}

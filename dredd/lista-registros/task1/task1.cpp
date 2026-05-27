#include <iostream>

using namespace std;

struct Ponto {
	int X;
	int Y;
};

struct retangulo {
	Ponto V1;
	Ponto V2;
};

bool dentro (retangulo figura, Ponto alfa) {
	bool estaDentro = false;
	if (alfa.X >= figura.V1.X and alfa.X <= figura.V2.X)
		if (alfa.Y >= figura.V1.Y and alfa.Y <= figura.V2.Y)
			estaDentro = true;
			
	return estaDentro;
}

int main() {
	Ponto alfa;
	cin >> alfa.X >> alfa.Y;
	
	int retangulos;
	cin >> retangulos;
	
	int contador = 0;
	
	for (int i = 0; i < retangulos; i++) {
		retangulo figura;
		cin >> figura.V1.X >> figura.V1.Y >> figura.V2.X >> figura.V2.Y;
		if (dentro(figura, alfa))
			contador++;
	}
	
	cout << contador << endl;
	
	return 0;
}

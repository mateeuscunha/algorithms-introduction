#include <iostream>

using namespace std;

int main() {
	string cor, forma, grupo;
	
	cin >> cor >> forma; 
	
	
	if (cor == "Vermelho" and forma == "Redondo") {
		grupo = "A";
	} else if (cor == "Verde" and forma == "Triangular") {
		grupo = "B";
	} else if (cor == "Azul" and forma == "Quadrado") {
		grupo = "C";
	} else if (cor == "Amarelo" and forma == "Elíptico") {
		grupo = "D";
	} else if (cor == "Laranja" and forma == "Hexagonal") {
		grupo = "E";
	} else if (cor == "Roxo" and forma == "Pentagonal") {
		grupo = "F";
	} else if (cor == "Prateado" and forma == "Octogonal") {
		grupo = "G";
	} else if (cor == "Dourado" and forma == "Oval") {
		grupo = "H";
	} else {
		grupo = "X";
	}
	
	
	cout << grupo << endl;
	
	
	
	
	return 0;
}
 

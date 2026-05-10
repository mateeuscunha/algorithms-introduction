#include <iostream>

using namespace std;

int main() {
	int qtd;
	cin >> qtd;
	
	int *ponteiro = new int[qtd];
	
	for (int i = 0; i < qtd; i++)
		cin >> ponteiro[i];
	
	int b = 0;
	int c = qtd - 1;
	bool capicua = true;
	
	while ((b < c) and (capicua)) {
		if (ponteiro[b] == ponteiro[c]) {
			cout << b << " " << ponteiro[b] << " ";
			cout << c << " " << ponteiro[c] << " ";
		} else {
			capicua = false;
		}
		
		b++;
		c--;
	}
	
	
	if (capicua)
		cout << endl << "sim" << endl;
	else 
		cout << "nao" << endl;
	
	delete [] ponteiro;

	return 0;
}

#include <iostream>
using namespace std;

void sequencia(int & inicial, int & quantidade) {
	cout << inicial << " ";
	
	quantidade = 1;
	
	while (inicial > 1) {
		quantidade += 1;
		
		if (inicial % 2 == 0) { //par
			inicial = inicial/2;
			cout << inicial << " ";
			
		} else {
			inicial = (3 * inicial) + 1;
			cout << inicial << " ";
		}
	}
}


int main() {
	int inicial;
	int quantidade = 0;
	cin >> inicial;	
	
	sequencia(inicial, quantidade);
	
	cout << endl << quantidade;
	
	return 0;
}

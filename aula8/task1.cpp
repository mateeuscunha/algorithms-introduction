#include <iostream>
using namespace std;

int main() {
	int idade;
	int grifinoria = 0;
	int corvinal = 0;
	int sonserina = 0;
	int lufa = 0;
	int somaidade = 0;
	/*
	cin >> idade;
	
	while (idade != -1) {
		if ((idade >= 7) and (idade <= 9)) {
			grifinoria += 1;
		} else if ((idade >= 10) and (idade <= 12)) {
			corvinal += 1;
		} else if ((idade >= 13) and (idade <= 15)) {
			sonserina++;
		} else if ((idade >= 16) and (idade <= 17)) {
			lufa++;
		}
		
		somaidade +=idade;
		cin << idade;
	}
	
	
	*/
	
	
	do {
		
		if ((idade >= 7) and (idade <= 9)) {
			grifinoria += 1;
		} else if ((idade >= 10) and (idade <= 12)) {
			corvinal += 1;
		} else if ((idade >= 13) and (idade <= 15)) {
			sonserina++;
		} else if ((idade >= 16) and (idade <= 17)) {
			lufa++;
		}
		
		if ((idade != -1) and (idade >= 7) and (idade <= 17)) {
			somaidade += idade;
		}
		cin >> idade;
		
	} while (idade != -1);
	
	cout << grifinoria << endl; 
	cout << corvinal << endl; 
	cout << sonserina << endl;
	cout << lufa << endl;
	cout << somaidade << endl;
	
	return 0;
}

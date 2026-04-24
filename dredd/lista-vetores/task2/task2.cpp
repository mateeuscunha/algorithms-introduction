#include <iostream>

using namespace std;

int main() {
	int vet[10];
	int derrotados = 0;
	
	
	for (int i = 0; i < 10; i++) { //ler vetor
		cin >> vet[i];
	}
	
	
	bool morreuAlguem = true;
	int i = 0;
	while (morreuAlguem) {
		morreuAlguem = false;
		
		for (int j = 0; j < 10; j++) {
			vet[j] -= 1;
			if (vet[j] == 0) {
				morreuAlguem = true;
				derrotados++;
			}
		}
		i++;
	}

	cout << derrotados << endl;

	return 0;
}

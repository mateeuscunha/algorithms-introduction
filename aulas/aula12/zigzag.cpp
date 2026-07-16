#include <iostream>

using namespace std;

int main() {
	int tab[7][5];
	
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++)
			cin >> tab[i][j];
	}
	
	for (int j = 0; j < 5; j++) {
		if (j % 2 == 0) {
			for (int i = 0; i < 7; i++)
				cout << tab[i][j] << " ";
		}
		else {
			for (int i = 6; i >= 0; i--)
				cout << tab[i][j] << " ";
		}
	}
	
	return 0;
}

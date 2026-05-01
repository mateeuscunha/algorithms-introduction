#include <iostream>

using namespace std;

bool vogMai(char a) {
	if (a == 'A' or a == 'E' or a == 'I' or a == 'O' or a == 'U')
		return true;
	else
		return false;
}

int main() {
	int l;
	cin >> l;
	char original[l][l];
	
	for (int i = 0; i < l; i++) //preenchimento
		for (int j = 0; j < l; j++)
			cin >> original[i][j];
	
	bool achou = false;
	for (int i = 0; i < (l - 1); i++)
		for (int j = 0; j < (l - 1); j++)
			if (vogMai(original[i][j])) 
				if (vogMai(original[i+1][j]) and vogMai(original[i+1][j+1]) and vogMai(original[i][j+1])) {
					cout << original[i][j] << " " << original[i][j+1] << endl;
					cout << original[i+1][j] << " " << original[i+1][j+1] << endl;
					achou = true;
				}
	
	if (!achou) 
		cout << "submatriz nao encontrada" << endl;
	
	return 0;
}

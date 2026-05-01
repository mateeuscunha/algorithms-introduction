#include <iostream>

using namespace std;

int main() {
	char tab[5][5];
	char vencedor = '\0';
	
	for (int i = 0; i < 5; i++) //lendo
		for (int j = 0; j < 5; j++)
			cin >> tab[i][j];		
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (tab[i][j] != '-') {
				bool igualLinha = true;
				for (int k = 0; k < 5; k++) //checar a mesma linha
					if (tab[i][k] != tab[i][j])
						igualLinha = false;
				
				bool igualColuna = true;
				for (int k = 0; k < 5; k++) //checar a mesma coluna
					if (tab[k][j] != tab[i][j])
						igualColuna = false;
						
				if (igualColuna or igualLinha)
					vencedor = tab[i][j];
			}	
		}
	}
	
	//diagonal principal
	if ((tab[0][0] == tab[1][1]) and (tab[0][0] == tab[2][2]) and (tab[0][0] == tab[3][3]) and (tab[0][0] == tab[4][4]) and (tab[0][0] != '-'))
		 vencedor = tab[0][0];

	//diagonal secundaria
	if ((tab[0][4] == tab[1][3]) and (tab[0][4] == tab[2][2]) and (tab[0][4] == tab[3][1]) and (tab[0][4] == tab[4][0]) and (tab[0][4] != '-'))
		 vencedor = tab[0][4];

	
	
	
	
	if (vencedor == '\0')
		cout << "VELHA" << endl;
	else
		cout << vencedor << endl;

	return 0;
}

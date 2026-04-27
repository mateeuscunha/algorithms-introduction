#include <iostream>

using namespace std;

int main() {
	int tab[8][8];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> tab[i][j];

    int ti, tj;
    for (int i = 0; i < 8; i++) {//acha onde ta a torre
        for (int j = 0; j < 8; j++) {
            if (tab[i][j] == 1) {
				ti = i;
				tj = j;
			}
		}
	}	

	

	for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
			if (tab[i][j] == 2) {
				bool bloqueado = false;
				
				if ((i == ti) and (j != tj)) { //mesma linha sem ser o cara
					if (j < tj) { //se esta a esquerda
						for (int a = j+1; a < tj; a++) { //loop
							if (tab[i][a] != 0)
								bloqueado = true;
						}
						if (!bloqueado) {
							cout << i << " " << j << endl;
						}
					}
					else { //se esta a direita
						for (int a = tj+1; a < j; a++) {
							if (tab[i][a] != 0)
								bloqueado = true;
						}
						if (!bloqueado) {
							cout << i << " " << j << endl;
						}
					}
				}
				else if ((i != ti) and (j == tj)) { //mesma coluna sem ser o cara
					if (i < ti) { //se esta acima
						for (int a = i+1; a < ti; a++) {
							if (tab[a][j] != 0)
								bloqueado = true;
						}
						if (!bloqueado)
							cout << i << " " << j << endl;
					}
					else { //se esta abaixo
						for (int a = ti+1; a < i; a++) {
							if (tab[a][j] != 0)
								bloqueado = true;
						}
						if (!bloqueado)
							cout << i << " " << j << endl;						
					}
				}
			}
		}
	
	
	

	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int tab[8][8];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> tab[i][j];

    int ti, tj;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (tab[i][j] == 1) { ti = i; tj = j; }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tab[i][j] != 2) continue;

            // a peça está na mesma linha ou coluna da torre?
            if (i != ti && j != tj) continue;

            // há alguma peça bloqueando o caminho?
            bool bloqueado = false;

            if (i == ti) { // mesma linha: checar entre as colunas
                int cMin = min(j, tj) + 1;
                int cMax = max(j, tj);
                for (int c = cMin; c < cMax; c++)
                    if (tab[i][c] != 0) { bloqueado = true; break; }
            } else { // mesma coluna: checar entre as linhas
                int lMin = min(i, ti) + 1;
                int lMax = max(i, ti);
                for (int l = lMin; l < lMax; l++)
                    if (tab[l][j] != 0) { bloqueado = true; break; }
            }

            if (!bloqueado)
                cout << i << " " << j << "\n";
        }
    }

    return 0;
}

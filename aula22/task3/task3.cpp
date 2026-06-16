#include <iostream>

using namespace std;

int main() {

    int v[20] = {1, 3, 6, 7, 8, 22, 25, 41};
    int numero;
    int tam = 8;

    cin >> numero;

    v[tam] = numero;

    while (numero != -1 and tam < 20) {

        v[tam] = numero;
        tam++;

        for (int i = 0; i < tam - 1; i++) {

            int indiceMin = i;

            for (int j = i + 1; j < tam; j++) {

                if (v[j] < v[indiceMin]) {
                    indiceMin = j;
                }
            }

            if (indiceMin != i) {

                int temp = v[i];
                v[i] = v[indiceMin];
                v[indiceMin] = temp;
            }
        }
        cin >> numero;
    }

    for (int i = 0; i < tam; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

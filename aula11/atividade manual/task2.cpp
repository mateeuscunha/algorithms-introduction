#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int mat[N][M];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> mat[i][j];
		}
	}
	
	
	int principal[N];
	for (int i = 0; i < N; i++) { //lendo a diagonal principal
		for (int j = 0; j < M; j++) {
			if (i == j) {
				principal[i] = mat[i][j];
			}
		}
	}
	
	//pegando a mediana
	sort (principal, principal + N); //ordem crescente
	float mediana;
	if (N%2 != 0) //numero impar de elementos
		mediana = principal[N/2];
	else //numero par de elementos
		mediana = ((principal[N/2 - 1] + principal[N/2]) / 2.0);
	
	
	
	int secundaria[N];
	//lendo a diagonal secundaria
	int k = 0;
	int p = (N-1);
	while (k < N and p >= 0) {
		secundaria[k] = mat[k][p];
		k++;
		p--;
	}
	
	float media = 0; //tirando a media
	for (int i = 0; i < N; i++) {
		media += secundaria[i];
	}
	media = media/N;
	
	
	
	cout << mediana << endl;
	cout << media << endl;

	return 0;
}
/*
saida1 = 5 4

6 6
1 2 3 4 5 6
6 5 4 3 2 1
1 3 5 7 9 0
0 2 4 6 8 1
2 4 6 8 5 7
1 0 0 0 0 0




saida2 = 10 8.42

7 7
10 8 15 2 2 1 7
5 11 3 21 4 19 14
18 23 5 10 15 20 11
5 2 3 6 9 30 9
4 8 12 16 20 5 3
1 0 10 11 8 17 13
0 0 0 0 0 0 1




saida3 = 2 7

7 7
1 8 15 2 2 1 7
9 2 3 21 4 5 14
18 23 3 10 3 2 11
25 2 3 4 9 34 9
14 8 12 16 3 5 3
1 10 10 11 8 2 13
8 0 0 0 0 0 1


*/

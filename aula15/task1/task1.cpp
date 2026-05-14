#include <iostream>

using namespace std;

int fatorial (int i) {
	int res = 1;
	for (int j = 0; j < i; j++)
		res *= i - j;
		
	return res;
}

void obterVetor(float *ponteiro, int tam) {
	for (int i = 0; i < tam; i++) {
		ponteiro[i] = (2*(fatorial(i)) + i) / (i*i + 1.75);
	}
}

int main() {
	int N;
	cin >> N;
	
	float *vetor = new float[N];
	
	obterVetor(vetor, N);
	
	int M;
	cin >> M;
	
	for (int i = M; i < N; i++)
		cout << vetor[i] << endl;
	
	delete[] vetor;

	return 0;
}

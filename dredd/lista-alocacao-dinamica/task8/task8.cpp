#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int *original = new int[N];
	for (int i = 0; i<N; i++)
		cin >> original[i];
	
	int *resultado = new int[N];
	int tam = 0;
	for (int i = 0; i<N; i++) 
		if ((original[i] % 2 != 0) and (original[i] % 3 == 0)) {
			resultado[tam++] = original[i];
		}
	
	cout << tam << endl;
	for (int i = 0; i < tam; i++)
		cout << resultado[i] << " ";

	delete[] original;
	return 0;
}

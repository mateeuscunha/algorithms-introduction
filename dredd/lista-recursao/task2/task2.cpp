#include <iostream>

using namespace std;

int menor(int *v, int n) {
    if (n == 1)
        return v[0];
    else {
        int menorResto = menor(v + 1, n - 1);  // menor do restante
        if (v[0] < menorResto)
            return v[0];
        else
            return menorResto;
    }
}

int main() {
	int N;
	cin >> N;
	
	int *V = new int[N];
	
	for (int i = 0; i < N; i++)
		cin >> V[i];
	
	cout << menor(V, N) << endl;

	delete [] V;
	return 0;
}

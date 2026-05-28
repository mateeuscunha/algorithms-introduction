#include <iostream>

using namespace std;

int logaritmo (int num, int res, int iterador) {
	if (res == num)
		return iterador;
	else {
		return logaritmo(num, res*3, iterador+1);
	}
}

int main() {
	int num;
	cin >> num;
	
	cout << logaritmo(num, 1, 0) << endl;

	return 0;
}

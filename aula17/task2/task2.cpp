#include <iostream>

using namespace std;

void fetuccine(int a, int b, int i, int termos) {
	if (i >= termos) return;
	
	if (i == 0) {
		cout << a;
		fetuccine(a, b, i+1, termos);
	} else if (i == 1) {
		cout << " " << b;
		fetuccine(a, b, i+1, termos);
	} else {
		int proximo;
		if (i % 2 == 0)
			proximo = b + a;
		else
			proximo = b - a;
			
		cout << " " << proximo;
		fetuccine(b, proximo, i+1, termos);
	}
}

int main() {
	int termos, n1, n2;
	cin >> termos;
	cin >> n1 >> n2;
	
	fetuccine(n1, n2, 0, termos);
	cout << endl;
	
	return 0;
}

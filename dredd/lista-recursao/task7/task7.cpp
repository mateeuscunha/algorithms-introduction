#include <iostream>

using namespace std;

void ricci (int f1, int f2, int n, int i) {
	cout << f1 << " ";
	
	if (i < n)
		ricci (f2, f1+f2, n, i+1);
}

int main() {
	int f1, f2;
	cin >> f1 >> f2;
	
	int n;
	cin >> n;
	
	ricci (f1, f2, n, 1);

	return 0;
}

#include <iostream>

using namespace std;

int vezes(int a, int b) {
	if (b == 0)
		return 0;
	else 
		return a + vezes(a, b-1);
}

int main() {
	int a, b;
	cin >> a >> b;
	
	cout << vezes(a, b) << endl;
	
	return 0;
}

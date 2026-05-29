#include <iostream>

using namespace std;

int funcao (int m, int n) {
	if (m == 0)
		return n+1;
	else if (m>0 and n == 0)
		return funcao(m-1, 1);
	else if (m>0 and n>0)
		return funcao (m-1, funcao(m, n-1));
	else 
		return -1;
}

int main() {
	int m, n;
	cin >> m >> n;
	
	cout << funcao(m, n) << endl;
	
	return 0;
}

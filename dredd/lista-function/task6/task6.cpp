#include <iostream>
#include <cmath>

using namespace std;

int arredondadar (float n) {
	int parteInteira = floor(n);
	
	if ((parteInteira % 2) == 0)
		return ceil(n);
	else
		return floor(n);
}

int main() {
	float number;
	cin >> number;
	
	cout << arredondadar(number) << endl;

	return 0;
}

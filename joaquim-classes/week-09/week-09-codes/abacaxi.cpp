#include <iostream>

using namespace std;

int main() {
	char palavra1[7] = {'a', 'b', 'a', 'c', 'a', 'x', 'i'};
	char palavra2[8] = {'@', 'b', '@', 'c', '@', 'x', 'y', '\0'};
	char palavra3[100] = "abacaxi";
	char palavra4[8] = "abacaxi";
	string palavra5 = "abacaxi";

	cout << palavra1 << endl;
	cout << palavra2 << endl;
	cout << palavra3 << endl;
	cout << palavra4 << endl;
	cout << palavra5 << endl;

	return 0;
}

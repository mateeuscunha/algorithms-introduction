#include <iostream>

using namespace std;

int soma (int *a, int *b) {
	return (*a) + (*b);
}

int main() {
	int A = 3;
	int B = 2;

	int *ptA = &A;
	int *ptB = &B;
	
	cout << soma(ptA, ptB) << endl;


	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int vetor[10];
	cout << "char " << sizeof(char) << endl;
	cout << "short " << sizeof(short) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long " << sizeof(long) << endl;
	cout << "long long " << sizeof(long long) << endl;
	
	cout << "float " << sizeof(float) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long double " << sizeof(long double) << endl;
	
	cout << "bool " << sizeof(bool) << endl;
	
	cout << "int vetor [10] " << sizeof(vetor) << endl;
	
	return 0;
}

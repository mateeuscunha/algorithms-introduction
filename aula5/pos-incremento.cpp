#include <iostream>
using namespace std;

int main() {
	int x = 2;
	int y = 3;
	int z = 0;
	
	z = x++ + y++;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	return 0;
}

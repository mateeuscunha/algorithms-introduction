#include <iostream>

using namespace std;

int main() {
	int *ptr;
	
	ptr = new int;
	*ptr = 22;
	
	cout << *ptr << endl;



	return 0;
}

#include <iostream>

using namespace std;

void imprima (int num, int pos) {
	if (pos > num)
		return;
	else {
		cout << pos << " ";
		imprima (num, pos+1);
	}
}

int main() {
	int num;
	cin >> num;
		
	imprima (num, 0);
	
	return 0;
}

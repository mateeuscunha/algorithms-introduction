#include <iostream>

using namespace std;

int fatDuplo (int num, int res) {
	if (num <= 0)
		return res;
	else
		return fatDuplo (num - 2, num*res);
}

int main() {
	int num;
	cin >> num;
	
	cout << fatDuplo(num, 1) << endl;

	return 0;
}

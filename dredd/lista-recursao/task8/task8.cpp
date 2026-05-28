#include <iostream>

using namespace std;

int fdex (int x);

int hdex (int a) {
	if (a <= 0)
		return 0;
	else
		return hdex(a-1) + (fdex(a-1));
}

int fdex (int x) {
	if (x <= 0)
		return 1;
	else if (x % 2 == 0)
		return 2*hdex(x) + fdex(x-1);
	else
		return 2*hdex(x) - fdex(x-1);
}

int main() {
	int x;
	cin >> x;
	
	cout << fdex(x) << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int original[6][6], transposta[6][6], res[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> original[i][j];
		}
	}


	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			transposta[i][j] = original[j][i];
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			res[i][j] = transposta[abs(i-5)][j];
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

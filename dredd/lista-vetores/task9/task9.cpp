#include <iostream>

using namespace std;

int main() {
	float a[10], b[10], c[10];
	
	for (int i = 0; i < 10; i++) { //lendo a
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) { //lendo b
		cin >> b[i];
	}

	//fazendo o c[10]
	
	int x = 0;
	int y = 9;
	
	while (x < 10) {
		c[x] = (a[x] + b[y]) / 2;
		x++;
		y--;
	}

	//pegando maiores e segundos maiores
	float maiA, segA, maiB, segB;
	maiA = segA = -1;
	maiB = segB = -1;
	
	for (int i = 0; i < 10; i++) {
		if (a[i] > maiA) {
			segA = maiA;
			maiA = a[i];
		} else if (a[i] > segA) {
			segA = a[i];
		}
		
		if (b[i] > maiB) {
			segB = maiB;
			maiB = b[i];
		} else if (b[i] > segB) {
			segB = b[i];
		}
	}
	

	//IMPRESSÕES
	
	for (int i = 0; i < 10; i++) {
		cout << c[i] << endl;
	}
	
	cout << endl << maiA << endl << segA << endl;
	cout << endl << maiB << endl << segB << endl;

	return 0;
}

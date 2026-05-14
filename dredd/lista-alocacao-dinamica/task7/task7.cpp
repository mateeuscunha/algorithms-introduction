#include <iostream>

using namespace std;

int main() {
	int tamA;
	cin >> tamA;
	
	int *a = new int[tamA];
	for (int i = 0; i < tamA; i++)
		cin >> a[i];
	
	int tamB;
	cin >> tamB;
	
	int *b = new int[tamB];
	for (int i = 0; i < tamB; i++)
		cin >> b[i];
	
	
	int *c = new int[tamA+tamB];
	for (int i = 0; i < tamA; i++)
		c[i] = a[i];

	int itC = tamA;
	
	for (int i = 0; i < tamB; i++) {
		bool esta = false;
		for (int j = 0; j < tamA; j++) 
			if (b[i] == a[j])
				esta = true;
			
		if (!esta)
			c[itC++] = b[i];
	}
		
	for (int i = 0; i < itC; i++)
		cout << c[i] << " ";
	cout << endl;

	delete[] a;
	delete[] b;	
	delete[] c;
	return 0;
}

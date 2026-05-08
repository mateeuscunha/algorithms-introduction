#include <iostream>

using namespace std;

int main() {
	int vetor[5] = {22, 1, 2, 3, 4};
	int *ptr = vetor;
	ptr+=1;
	
	cout << *ptr << endl;



	return 0;
}

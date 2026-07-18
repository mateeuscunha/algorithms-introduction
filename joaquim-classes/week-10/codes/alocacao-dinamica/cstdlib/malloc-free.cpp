#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int n;
	int *vetor;
	cin >> n;
	
	vetor = (int*) malloc(sizeof(int)*n); //new -- precisa do casting
	
	free(vetor); //delete



	return 0;
}

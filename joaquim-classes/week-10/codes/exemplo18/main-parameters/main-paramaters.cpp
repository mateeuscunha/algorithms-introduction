#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++)
		cout << i << ": " << argv[i] << endl;
	
	cout << "Valor de argc: " << argc << endl;
	
	return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream entrada ("entrada.txt");
	char c[1];
	int count = 0;
	
	while ( entrada.read(c,1) ) {
		if (c[0] == 'a')
			count++;
	}
	
	cout << "Há " << count << " 'a' no arquivo."<< endl;

	return 0;
}

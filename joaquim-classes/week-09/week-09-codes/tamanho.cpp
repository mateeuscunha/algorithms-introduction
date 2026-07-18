#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int tam1, tam2;
	string frase1 = "Bom dia.";
	char frase2[30] = "Boa noite.";
	
	tam1 = frase1.length(); //ou frase1.size()
	tam2 = strlen(frase2);
	
	cout << tam1 << " " << tam2 << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int first;
	cin >> first;
	
	char *primeiro = new char[first];
	for (int i = 0; i < first; i++)
		cin >> primeiro[i];
	
	int second;
	cin >> second;
	
	char *segundo = new char[second];
	for (int i = 0; i < second; i++)
		cin >> segundo[i];
	
	int contador = 0;
	for (int i = 0; i < first; i++) {
		int j = 0;
		bool sair = true;
		while ((j < second) and (sair)) {
			if (primeiro[i] == segundo[j]) {
				primeiro[i] = -1;
				sair = false;
				contador++;
			}
			j++;
		}
	}
	
	char *res = new char[contador];
	
	int p = 0;
	for (int i = 0; i < first; i++)
		if (primeiro[i] != -1)
			res[p++] = primeiro[i];

	for (int i = 0; i < p; i++)
		cout << res[i] << " ";

	
	delete[] primeiro;
	delete[] segundo;
	delete[] res;
	return 0;
}

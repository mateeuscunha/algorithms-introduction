#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char *veta = new char[3];
	char *vetb = new char[3];
	
	//lendo o vetor A
	int pos = 0;
	int capacidade = 3;
	while (pos < 10) {
		if (pos < capacidade)
			cin >> veta[pos++];
		else {
			//redimensiona
			char *aux = new char[capacidade+1];
			memcpy (aux, veta, (sizeof(char) * capacidade++));
			delete [] veta;
			veta = aux;
			
			cin >> veta[pos++];
		}
	}
	
	//lendo o vetor B
	pos = 0;
	capacidade = 3;
	while (pos < 10) {
		if (pos < capacidade)
			cin >> vetb[pos++];
		else {
			//redimensiona
			char *aux = new char[capacidade+1];
			memcpy (aux, vetb, (sizeof(char) * capacidade++));
			delete [] vetb;
			vetb = aux;
			
			cin >> vetb[pos++];
		}
	}
	
	//fazendo as trocas
	char *saveA = new char[10];
	memcpy (saveA, veta, sizeof(char) * 10);
	
	int a = 0;
	int b = 1;
	
	while (b < 10) {
		veta[a] = vetb[b];
		vetb[b] = saveA[a];
				
		a += 2;
		b += 2;
	}
	
	//imprimindo
	a = 0;
	b = 0;
	
	while (a < 10) {
		cout << veta[a] << " ";
		a++;
	}
		
	cout << endl;
		
	while (b < 10) {
		cout << vetb[b] << " ";
		b++;
	}
		
	
	delete [] saveA;
	delete [] veta;
	delete [] vetb;
	return 0;
}

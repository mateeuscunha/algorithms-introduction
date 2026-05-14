#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n <= 2) 
		cout << 0 << endl;	
	else {
		float *vetor = new float[n];
		
		for (int i = 0; i < n; i++)
			cin >> vetor[i];
		
		float mai, segmai, men, segmen; //achando eles
		int pos_segmen, pos_segmai, pos_mai, pos_men;
		
		if (vetor[0] > vetor[1]) {
			mai = vetor[0];
			pos_mai = 0;
			
			segmai = vetor[1];
			pos_segmai = 1;
			
			men = vetor[1];
			pos_men = 1;
			
			segmen = vetor[0];
			pos_segmen = 0;
		} else {
			mai = vetor[1];
			pos_mai = 1;
			
			segmai = vetor[0];
			pos_segmai = 0;
			
			men = vetor[0];
			pos_men = 0;
			
			segmen = vetor[1];
			pos_segmen = 1;
		}
		
		
		for (int i = 2; i < n; i++) {
			if (vetor[i] > mai) {
				segmai = mai;
				pos_segmai = pos_mai;
				
				mai = vetor[i];
				pos_mai = i;
			} else if (vetor[i] > segmai) {
				segmai = vetor[i];
				pos_segmai = i;
			}
			
			if (vetor[i] < men) {
				segmen = men;
				pos_segmen = pos_men;
				
				men = vetor[i];
				pos_men = i;
			} else if (vetor[i] < segmen) {
				segmen = vetor[i];
				pos_segmen = i;
			}
				
		}
		
		//fazendo o novo vetor sem os dois
		float *novo = new float[n-2];
		int cnovo = 0;
		
		for (int i = 0; i < n; i++) {
			if ((i != pos_segmen) and (i != pos_segmai)) {
				novo[cnovo++] = vetor[i];
			}
		}
		
		//imprimindo o novo vetor
		
		for (int i = 0; i < cnovo; i++)
			cout << novo[i] << "\n";
		
		
		delete[] vetor;
		delete[] novo;

	}
	return 0;
}

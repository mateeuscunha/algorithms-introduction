#include <iostream>

using namespace std;

int buscaBinariaIterativa (int *vetor, int tam, int k);
int buscaBinariaRecursiva (int *vetor, int inicio, int fim, int k);

int buscaBinaria (int *vet, int tam, int k) {
	//return buscaBinariaIterativa(vet, tam, k);
	return buscaBinariaRecursiva(vet, 0, tam-1, k);
}

int buscaBinariaIterativa (int *vetor, int tam, int k) {
	int inicio = 0, fim = tam-1, meio;
	
	while (inicio <= fim) {
		meio = (inicio + fim) / 2;
		if (k == vetor[meio])
			return meio;
		else if (k < vetor[meio])
			fim = meio - 1;
		else
			inicio = meio + 1;
	}
	
	return -1;
}

int buscaBinariaRecursiva (int *vetor, int inicio, int fim, int k) {	
	if (inicio > fim)
		return -1;
	
	cout << "inicio: " << inicio << endl;
	cout << "fim: " << fim << endl;
	
	int meio = (inicio + fim) / 2;
	cout << "meio: " << meio << endl;	
	
	
	if (k == vetor[meio])
		return meio;
	else if (k < vetor[meio])
		return buscaBinariaRecursiva(vetor, inicio, meio-1, k);
	else
		return buscaBinariaRecursiva(vetor, meio+1, fim, k);
	
}

int main() {
	int vetor[10];
	int valor, posicao;
	
	for (int i = 0; i<10; i++)
		cin >> vetor[i];
	
	cin >> valor;
	
	posicao = buscaBinaria(vetor, 10, valor);
	
	if (posicao == -1)
		cout << "O elemento não está no vetor!" << endl;
	else
		cout << "O elemento está na posição " << posicao << " do vetor!" << endl;



	return 0;
}

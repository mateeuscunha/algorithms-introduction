#include <iostream>

using namespace std;

int buscaBinaria (int *vetor, int tam, int k) {
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
		
	/*
	Seja V um vetor de N posições e queremos determinar se um elemento K está ou não presente no vetor:
	1. Comparamos K com o elemento do meio do vetor ordenado em ordem crescente.
	2. Se o elemento do meio for igual a K, terminamos a busca, pois encontramos o elemento.
	3. Se o elemento do meio for maior do que K, a metade da direita pode ser descartada da busca.
	4. Se o elemento do meio for menor do que K, a metade da esquerda pode ser descartada da busca.
	5. Repetimos então este mesmo processo com a metade restante do vetor. Se esta metade for vazia, conclui-se que o elemento não está presente.
	*/
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

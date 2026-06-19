//INTEGRANTES: Gilbran Guimaraes Salem, Mateus Souza Cunha

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct atirador {
	int numGuerra;
	string nomeGuerra;
	string arma;
	string profissao;
	float forca;
};

void lerArquivo (string nomeArquivo, atirador *&vetor, int &tamanho, int &capacidade) {
	ifstream input (nomeArquivo);
	
	string primeiraLinha;
	getline(input, primeiraLinha);
	
	char pontoVirgula;
	
	atirador auxLeitura;
	
	while (input >> auxLeitura.numGuerra) {
		// lendo todas as informações do atirador
		input >> pontoVirgula;
		getline(input, auxLeitura.nomeGuerra, ';');
		getline(input, auxLeitura.arma, ';');
		getline(input, auxLeitura.profissao, ';');
		input >> auxLeitura.forca;
		
		// se necessário, redimensionando antes de atribuir ao vetor
		if (tamanho >= capacidade) {
			// redimensiona e atribui
			atirador *novo = new atirador[capacidade+5];
			copy(vetor, vetor + tamanho, novo);
			
			delete [] vetor;
			vetor = novo;
			
			capacidade += 5;
			
			vetor[tamanho] = auxLeitura;
			tamanho++;
		} else {
			// só atribui
			vetor[tamanho] = auxLeitura;
			tamanho++;
		}
	}
	
	input.close();
}

void inserir (atirador *&vetor, int &tamanho, int &capacidade) {
	// lendo os atributos do atirador a ser inserido
	atirador inserido;
	cout << endl << "Digite abaixo as informações do novo atirador." << endl;
	
	cout << "Número de guerra: ";
	cin >> inserido.numGuerra;
	
	cout << "Nome de guerra: ";
	cin >> inserido.nomeGuerra;
	
	cout << "Arma: ";
	cin >> inserido.arma;
	
	cout << "Profissão: ";
	cin >> inserido.profissao;
	
	cout << "Força: ";
	cin >> inserido.forca;
	
	// redimensionando, se necessário, e adicionando o atirador na última posição
	if (tamanho >= capacidade) {
		atirador *novo = new atirador[capacidade+5];
			copy(vetor, vetor + tamanho, novo);
			
			delete [] vetor;
			vetor = novo;
			
			capacidade += 5;
			
			vetor[tamanho] = inserido;
			tamanho++;
	} else {
		vetor[tamanho] = inserido;
		tamanho++;
	}
}

void remover (atirador *&vetor, int &tamanho, int &capacidade) {
	int numRemovido;
	cout << "Digite o número de guerra do atirador a ser removido: ";
	cin >> numRemovido;
	
	int posRemovido = -1;
	for (int i = 0; i < tamanho; i++)
		if (vetor[i].numGuerra == numRemovido)
			posRemovido = i;
			
	if (posRemovido == -1)
		cout << "Atirador não encontrado!" << endl;
	else {
		cout << "O atirador " << vetor[posRemovido].nomeGuerra << " será removido." << endl;
		
		vetor[posRemovido].nomeGuerra = "removido :(";
		vetor[posRemovido].numGuerra = -2;
		vetor[posRemovido].forca = -2;
	}
		
	
	
}

void ordenarForcaDecrescente (atirador *atiradores, int qtd) {
	int posMaior;
	atirador aux;
	for (int i = 0; i < qtd-1; i++) {
		posMaior = i;
		for (int j = i+1; j < qtd; j++)
			if (atiradores[j].forca > atiradores[posMaior].forca)
				posMaior = j;
			
		aux = atiradores[posMaior];
		atiradores[posMaior] = atiradores[i];
		atiradores[i] = aux;
	}
}

void ordenarNomeCrescente (atirador *atiradores, int qtd) {
	int posMenor;
	atirador aux;
	for (int i = 0; i < qtd-1; i++) {
		posMenor = i;
		for (int j = i+1; j < qtd; j++)
			if (atiradores[j].nomeGuerra < atiradores[posMenor].nomeGuerra)
				posMenor = j;
			
		aux = atiradores[posMenor];
		atiradores[posMenor] = atiradores[i];
		atiradores[i] = aux;
	}
}

void imprimirVetor (atirador *vetor, int tamanho) {
	char inteiro;
	cout << endl << " 1 - Imprimir vetor inteiro. \n 2 - Imprimir trecho do vetor \n";
	cin >> inteiro;
	
	if (inteiro == '1') 
		for (int i = 0; i < tamanho; i++) {
			cout << vetor[i].numGuerra << endl;
			cout << vetor[i].nomeGuerra << endl;
			cout << vetor[i].arma << endl;
			cout << vetor[i].profissao << endl;
			cout << vetor[i].forca << endl << endl;
		}
	else {
		int inicio, fim;
		cout << "Posição inicial: ";
		cin >> inicio;
		cout << endl << "Posição final: " << endl;
		cin >> fim;
		
		for (int i = inicio; i <= fim; i++) {
			cout << vetor[i].numGuerra << endl;
			cout << vetor[i].nomeGuerra << endl;
			cout << vetor[i].arma << endl;
			cout << vetor[i].profissao << endl;
			cout << vetor[i].forca << endl << endl;
		}
	}
		
}

int buscaNome (atirador *vetor, int tamanho, int inicio, int fim, string procurado) {
	ordenarNomeCrescente(vetor, tamanho);
	
	if (inicio > fim)
		return -1; // não achou
	
	int meio = (inicio + fim) / 2;
	
	if (vetor[meio].nomeGuerra == procurado)
		return meio;
	else if (procurado < vetor[meio].nomeGuerra) // descarta a direita
		return buscaNome (vetor, tamanho, inicio, meio-1, procurado);
	else // descarta a esquerda
		return buscaNome (vetor, tamanho, meio+1, fim, procurado);
}

void buscaForca (atirador *vetor, int tamanho, float forcaProcurada, int &posEncontrados, int encontrados[10]) {
	for (int i = 0; i < tamanho; i++) {
		if (vetor[i].forca == forcaProcurada) {
			encontrados[posEncontrados] = i;
			posEncontrados++;
		}
	}
}

void switchBusca (atirador *vetor, int tamanho) {
	cout << " 1 - Buscar por nome de guerra \n 2 - Buscar por força \n ";
	char flagBusca;
	cin >> flagBusca;
	
	if (flagBusca == '1') { // Buscar por nome de guerra
		string procurado;
		cout << "Digite o nome de guerra do atirador: ";
		cin >> procurado;
		
		int pos;
		pos = buscaNome(vetor, tamanho, 0, tamanho-1, procurado);
		
		if (pos != -1)
			cout << "O atirador " << procurado << " encontra-se na posição " << pos << " do vetor em ordem alfabética. \n";
		else
			cout << "Atirador não encontrado! \n";
	}
	else if (flagBusca == '2') { // Buscar por força
		float forcaProcurada;
		cout << "Digite a força do atirador: ";
		cin >> forcaProcurada;

		int posEncontrados = 0;
		int encontrados[10]; // encontra até 9 atiradores com a mesma força
		buscaForca(vetor, tamanho, forcaProcurada, posEncontrados, encontrados);
		
		if (posEncontrados == 0) { // não achou nenhum
			encontrados[0] = -1;
			cout << "Não há nenhum atirador com força igual a " << forcaProcurada << endl;
		}
		else {
			encontrados[posEncontrados] = -1; // a posição depois do último sinaliza o fim
			cout << "Há " << posEncontrados << " atirador[es] com essa força, no[s] índice[s]: ";
			int i = 0;
			while (i < 10 and encontrados[i] != -1) {
				cout << "=" << encontrados[i] << " ";
				i++;
			}
			cout << "com um vetor ordenado por ordem decrescente de força. \n\n";
		}
		
		
	}
}

void gravar (atirador *vetor, int tamanho) {
	int i = 0;
	bool achou = false;
	while (i < tamanho and !achou) {
		if (vetor[i].nomeGuerra == "removido :(")
			achou = true;
		if (!achou)
			i++;
	}
	
	while (i < tamanho-1) {
		vetor[i] = vetor[i+1];
		i++;
	}
}

void menu (char &flag, atirador *&vetor, int &tamanho, int &capacidade) {
	// impressão do menu
	cout << "\n\n" << "================= ";
	cout << "MENU DE FUNCIONALIDADES" << endl;
	cout << " 1 - Adicionar novo atirador \n 2 - Ordenar por força (decrescente) \n 3 - Ordenar por nome (ordem alfabética) \n 4 - Remover atirador \n 5 - Imprimir vetor \n 6 - Buscar Atirador \n 7 - Gravar alterações \n 8 - Encerrar programa" << endl;
	cout << "================= ";
	cin >> flag;


	// lógica da resposta do usúario --- PODE SER UM SWITCH CASE
	if (flag == '1') {
		inserir(vetor, tamanho, capacidade);
	} else if (flag == '2') {
		ordenarForcaDecrescente(vetor, tamanho);
	} else if (flag == '3') {
		ordenarNomeCrescente(vetor, tamanho);
	} else if (flag == '4') {
		remover (vetor, tamanho, capacidade);
	} else if (flag == '5') {
		imprimirVetor (vetor, tamanho);
	} else if (flag == '6') {
		switchBusca(vetor, tamanho);
	} else if (flag == '7') {
		gravar(vetor, tamanho);
	} else if (flag == '8') {
		cout << "Fim do programa!" << endl;
	}
}

int main() {
	cout << "Insira o nome do arquivo a ser lido: ";
	string nomeArquivo;
	// cin >> nomeArquivo;
	nomeArquivo = "atiradores.csv";
	
	atirador *vetor = new atirador[40];
	int capacidade = 40;
	int tamanho = 0; // quantidade de elementos no vetor, de fato
	
	lerArquivo(nomeArquivo, vetor, tamanho, capacidade);
	
	char flag = '0';
	while (flag != '8') {
		menu(flag, vetor, tamanho, capacidade);	
	}

	delete [] vetor;
	return 0;
}

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
		cout << endl << "Posição final: ";
		cin >> fim;
		cout << endl;
		
		if (inicio < 0 || fim >= tamanho || inicio > fim) {
			cout << "Intervalo inválido!" << endl;
			return;
		} else {
			for (int i = inicio; i <= fim; i++) {
				cout << vetor[i].numGuerra << endl;
				cout << vetor[i].nomeGuerra << endl;
				cout << vetor[i].arma << endl;
				cout << vetor[i].profissao << endl;
				cout << vetor[i].forca << endl << endl;
			}
		}
	}
		
}

void inserir (atirador *&vetor, int &tamanho, int &capacidade) {
	// lendo os atributos do atirador a ser inserido
	atirador inserido;
	cout << endl << "Digite abaixo as informações do novo atirador." << endl;
	
	cout << "Número de guerra: ";
	cin >> inserido.numGuerra;
	
	cin.ignore(); //para ignorar o \n deixado pelo cin
	cout << "Nome de guerra: ";
	getline(cin, inserido.nomeGuerra);
	
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

void ordenarNomeCrescente (atirador *vetor, int tamanho) {
	int posMenor;
	atirador aux;
	for (int i = 0; i < tamanho-1; i++) {
		posMenor = i;
		for (int j = i+1; j < tamanho; j++)
			if (vetor[j].nomeGuerra < vetor[posMenor].nomeGuerra)
				posMenor = j;
			
		aux = vetor[posMenor];
		vetor[posMenor] = vetor[i];
		vetor[i] = aux;
	}
}

void ordenarForcaDecrescente (atirador *vetor, int tamanho) {
	int posMaior;
	atirador aux;
	for (int i = 0; i < tamanho-1; i++) {
		posMaior = i;
		for (int j = i+1; j < tamanho; j++)
			if (vetor[j].forca > vetor[posMaior].forca)
				posMaior = j;
			
		aux = vetor[posMaior];
		vetor[posMaior] = vetor[i];
		vetor[i] = aux;
	}
}

int buscaNome (atirador *vetor, int tamanho, int inicio, int fim, string procurado) {
		
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
		if (abs(vetor[i].forca - forcaProcurada) < 0.001f) { // se a força do elemento for igual a força procurada
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
		cin.ignore();
		getline(cin, procurado);
		
		ordenarNomeCrescente(vetor, tamanho);
		int pos = buscaNome(vetor, tamanho, 0, tamanho-1, procurado);
		
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

void gravar(atirador *vetor, int &tamanho, string nomeArquivo) {
    // 1. Remove lógicos do vetor
    int i = 0;
    while (i < tamanho) {
        if (vetor[i].numGuerra == -2) {
            for (int j = i; j < tamanho - 1; j++)
                vetor[j] = vetor[j + 1];
            tamanho--;
        } else {
            i++;
        }
    }

    // 2. Escreve no arquivo
    ofstream output(nomeArquivo);
    output << "numGuerra;nomeGuerra;arma;profissao;forca" << endl;
    for (int i = 0; i < tamanho; i++)
        output << vetor[i].numGuerra << ";"
               << vetor[i].nomeGuerra << ";"
               << vetor[i].arma << ";"
               << vetor[i].profissao << ";"
               << vetor[i].forca << endl;
    output.close();
}

void menu (char &flag, atirador *&vetor, int &tamanho, int &capacidade, string nomeArquivo) {
	// impressão do menu
	cout << "\n\n" << "================= ";
	cout << "MENU DE FUNCIONALIDADES" << endl;
	cout << " 1 - Imprimir vetor \n 2 - Adicionar novo Atirador \n 3 - Remover Atirador \n 4 - Buscar Atirador \n 5 - Ordenar por nome (ordem alfabética) \n 6 - Ordenar por força (decrescente) \n 7 - Gravar alterações \n 8 - Encerrar programa" << endl;
	cout << "================= ";
	cin >> flag;


	// lógica da resposta do usúario
	switch (flag)
	{
	case '1':
		imprimirVetor (vetor, tamanho);
		break;
	case '2':
		inserir(vetor, tamanho, capacidade);
		break;
	case '3':
		remover (vetor, tamanho, capacidade);
		break;
	case '4':
		switchBusca(vetor, tamanho);
		break;
	case '5':
		ordenarNomeCrescente(vetor, tamanho);
		break;
	case '6':
		ordenarForcaDecrescente(vetor, tamanho);
		break;
	case '7':
		gravar(vetor, tamanho, nomeArquivo);
		break;
	case '8':
		cout << "Fim do programa!" << endl;
		break;
	}
}

int main() {
	cout << "Insira o nome do arquivo a ser lido: ";
	string nomeArquivo;
	cin >> nomeArquivo;
	
	atirador *vetor = new atirador[40];
	int capacidade = 40;
	int tamanho = 0; // quantidade de elementos no vetor, de fato
	
	lerArquivo(nomeArquivo, vetor, tamanho, capacidade);
	
	char flag = '0';
	while (flag != '8') {
		menu(flag, vetor, tamanho, capacidade, nomeArquivo);	
	}

	delete [] vetor;
	return 0;
}

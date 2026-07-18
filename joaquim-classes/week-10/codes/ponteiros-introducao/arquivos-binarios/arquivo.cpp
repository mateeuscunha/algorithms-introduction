#include <iostream>

using namespace std;

int main() {
	arquivo.write((const char *) (&variavel), sizeof(tipo_dado_variavel));
	
	arquivo.read(reinterpret_cast<char *> (&variavel), sizeof(tipo_dado_variavel));



	return 0;
}


/*
 O que você deve pesquisar?
Pelo que seu professor está cobrando, você precisa dominar esses conceitos. Pesquise por:

"C++ binary file read write fstream" (Termo mais técnico e amplo).

"C++ reinterpret_cast example" (Para entender a conversão de tipos).

"C++ POD types vs non-POD serialization" (Para entender o perigo de salvar string ou vector assim).

Sugiro começar assistindo a tutoriais no YouTube sobre "working with binary files in C++". É um conteúdo visual que ajuda muito a entender como os bytes "pulam" da memória para o arquivo
*/

#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, media;
    cout << "Informe as tres notas do aluno e a media geral da turma: " << endl;
    cin >> n1 >> n2 >> n3 >> media;

    float maluno = (n1 + n2 + n3) / 3;

    if (maluno > media) {
        cout << "A nota do aluno esta acima da media da sala!" << endl;
    } else if (maluno < media) {
        cout << "A nota do aluno esta abaixo da media da sala :(";
    } else {
        cout << "A nota do aluno e igual a media da sala.";
    }
    
    return 0;
}
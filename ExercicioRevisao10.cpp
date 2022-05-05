#include <iostream>
using namespace std;

int mediaAouP(int x, int y, int z, char w) {
    if (w == 'A') {
        return (x + y + z) / 3;
    }
    if (w == 'P') {
        return ((0.5 * x) + (0.3 * y) + (0.2 * z) / 3);
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    int nota1, nota2, nota3;
    char tipoMedia;

    cout << "Informe a primeira nota:   ";
    cin >> nota1;
    cout << "Informe a segunda nota:   ";
    cin >> nota2;
    cout << "Informe a terceira nota:   ";
    cin >> nota3;
    cout << "Informe o tipo de média:   ";
    cin >> tipoMedia;

    cout << "A MÉDIA DO ALUNO É:    " << mediaAouP(nota1, nota2, nota3, tipoMedia) << endl;

    return 0;
}

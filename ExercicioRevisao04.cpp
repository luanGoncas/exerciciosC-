#include <iostream>
using namespace std;

int multiplos(int numerador, int denominador) {
    if (denominador > numerador) {
        if (denominador % numerador == 0) {
            return true;
        }
        return false;
    }
    
    if (numerador % denominador == 0) {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[]) {
    int numerador, denominador;

    cout << "Informe o numerador:   ";
    cin >> numerador;
    cout << "Informe o denominador:   ";
    cin >> denominador;
    if (multiplos(numerador, denominador)) {
        cout << "São múltiplos." << endl;
    } else {
        cout << "NÃO são múltiplos." << endl;
    }
    
    return 0;
}

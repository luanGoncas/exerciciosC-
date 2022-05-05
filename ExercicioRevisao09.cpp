#include <iostream>
using namespace std;

bool parImpar(int n) {
    if (n % 2 == 0)
        return true;
    return false;
}

int main(int argc, char const *argv[]) {
    int numero;

    do {
        cout << "Informe o valor:   ";
        cin >> numero;
        if (parImpar(numero)) {
            cout << "O número é par" << endl;
        } else {
            cout << "O número é ímpar" << endl;
        }
    } while (numero != 0);
    
    

    return 0;
}

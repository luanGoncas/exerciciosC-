#include <iostream>
using namespace std;

int max(int n[]) {
    int maximo = 0;
    for (int i = 0; i < 20; i++) {
        if (maximo <= n[i])
            maximo = n[i];
    }
    return maximo;
}

int main(int argc, char const *argv[]) {
    int numero[20];
    
    for (int i = 0; i < 20; i++) {
        cout << endl << "Informe um número: ";
        cin >> numero[i];
    }

    cout << endl << "O maior valor digitado foi:    " << max(numero) << endl << endl;

    return 0;
}

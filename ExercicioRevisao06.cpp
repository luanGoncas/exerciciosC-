#include <iostream>
using namespace std;

int fatorial(int n) {
    int fat = 1;
    if (n == 0 || n == 1){
        return 1;
    } else {
        for (int i = 1; i < n; i++)
            fat *= i + 1;
        return fat;
    }
    
}

int main(int argc, char const *argv[]) {
    int numero;

    cout << "Informe o número:  ";
    cin >> numero;
    cout << "Fatorial:  " << fatorial(numero) << endl;

    return 0;
}

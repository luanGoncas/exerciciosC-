#include <iostream>
using namespace std;

void tabuada(int n) {
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << i * n << endl;
}

int main(int argc, char const *argv[]) {
    int n;

    while (n >= 0) {
        cout << "Insira um número para informar a tabuada:  ";
        cin >> n;
        tabuada(n);   
    }

    return 0;
}

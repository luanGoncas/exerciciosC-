#include <iostream>
using namespace std;

int funcao(int n) {
    int S = 1;
    if (n == 1) {
        return S;
    } else {
        for (int i = 1; i < n; i++) {
            S = 1 / S * (i + 1);
        }
        return S;
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << funcao(n) << endl;
    return 0;
}

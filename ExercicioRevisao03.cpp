#include <iostream>
using namespace std;

int funcao(int n) {
    int S = 1;
    if (n == 1) {
        return S;
    } else {
        for (int i = 1; i < n; i++) {
            S += 1 / (i + 1);
        }
        return S;
    }
}

int main(int argc, char const *argv[])
{
    int x = 3 / 2;
    cout << x << endl;
    cout << funcao(2) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int funcao(int x) {
    return ((2 * x) + 4);
}

int main(int argc, char const *argv[]) {
    
    for (int i = 0; i <= 20; i++) {
        cout << "f(" << i << ") = " << funcao(i) << endl;
    }

    return 0;
}

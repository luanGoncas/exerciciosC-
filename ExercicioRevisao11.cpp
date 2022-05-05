#include <iostream>
using namespace std;

void duracao(int segundos) {
    int hr = 0, min = 0;
    
    if (segundos >= 3600) {
        hr = segundos / 3600;
    }
    if (segundos >= 60) {
        min = segundos / 60;
    }
}

int main(int argc, char const *argv[]) {
    
    return 0;
}

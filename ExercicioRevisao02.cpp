#include <iostream>
using namespace std;

float converter(float temperatura) {
    return ((temperatura * 1.8) + 32);
}

int main(int argc, char const *argv[])
{
    int tempC = 0;
    cout << "Temperatura em ºC: " << tempC << endl;
    cout << "Temperatura em ºF: " << converter(tempC) << endl;
    return 0;
}

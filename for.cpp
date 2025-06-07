#include <iostream>
using namespace std;

int main() {
    int cuenta = 0;
    for (int i = 1; i <= 50; i++)
    {   
        if (i % 2 == 1)
        {
            cuenta = cuenta + i;
        }

    }
    cout << "La suma de los numeros impares del 1 al 50 es: " << cuenta << endl;
    return 0;
}
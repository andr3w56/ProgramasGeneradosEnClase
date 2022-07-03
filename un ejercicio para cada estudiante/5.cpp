#include <iostream>
#include <math.h>
using namespace std;

void Numero(double num){
    double elevado = pow(num, 2);
    cout << "El numero " << num << " elevado al cuadrado es " << elevado << endl;
}

int main(int argc, char const *argv[])
{
    Numero(5);
    return 0;
}

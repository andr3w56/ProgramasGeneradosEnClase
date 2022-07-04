#include <iostream>
#include <math.h>
using namespace std;

void Numero(double num1, double num2){
    double elevado = pow(num1, num2);
    cout << "El numero " << num1 << " elevado al " << num2 << " es " << elevado << endl;
}

int main(int argc, char const *argv[])
{
    Numero(2, 5);
    return 0;
}

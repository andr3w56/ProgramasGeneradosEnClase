#include <iostream>
using namespace std;

int main()
{
    cout << "Ejemplo bucle for" << endl;

    int tabla = 10;
    for (int k = 1; k <= 10; k++)
    {
        cout << tabla << " \033[1;34mX\033[0m " << k << " \033[1;31m=\033[0m " << (tabla * k) << endl;
    }

    cout << endl << "Tabla del 3";
    tabla = 3;
    for (int k = 1; k <= 30; k+=2)
    {
        cout << endl << tabla << " \033[1;34mX\033[0m " << k << " \033[1;31m=\033[0m " << (tabla * k);
    }
    return 0;
}
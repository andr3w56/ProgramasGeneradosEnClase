#include <iostream>
using namespace std;

int main()
{
    cout << "Ejemplo del bucle do while" << endl;
    int cont = 10;
    int tabla = 5;

    do {
        cout << tabla << " \033[1;34mx\033[0m " << cont << " \033[1;31m=\033[0m " << (tabla * cont) << endl;
        cont --;
    }
    while (cont >= 1);

}
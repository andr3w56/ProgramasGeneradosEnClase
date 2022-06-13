#include <iostream>
using namespace std;

int main()
{
    // cout << "\n\nEjemplo de bucle while que imprime la tabla del 9" << endl;

    int tabla;
    cout << "Ingrese un Numero entre 1 y 20: ";
    cin >> tabla;

    if (tabla >= 1 && tabla <= 20)
    {
        int i = 1;
        while (i <= 10)
        {
            cout << "\n" << tabla << " \033[1;31mX\033[0m " << i << " = " << (tabla * i);
            i++;
        }
    }
    else
        {
            cout << "Numero no valido"; 
        }
    


    // Se pide por teclado un número entrero que debe estar entre 1 y 20.
    // Este número representa la tabla que el usuario debe generar.
    // Se pide con un bucle while genera la tabla de multiplicar.
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingresa tu edad ";
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;

    if (edad >= 18)
    {
        cout << "Eres mayor de edad. Ya puedes votar";
    }
    else
    {
        cout << "Eres menor de edad";
    }
    return 0;
 }
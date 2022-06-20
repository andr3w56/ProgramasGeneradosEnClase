#include <iostream>

using namespace std;

string Semana(int dia)
{
    string aux;
    if (dia == 1)
    {
        aux = "Lunes";
    }
    else if (dia == 2)
    {
        aux = "Martes";
    }
    else if (dia == 3)
    {
        aux = "Miercoles";
    }
    else if (dia == 4)
    {
        aux = "Jueves";
    }
    else if (dia == 5)
    {
        aux = "Viernes";
    }
    else if (dia == 6)
    {
        aux = "Sabado";
    }
    else if (dia == 7)
    {
        aux = "Domingo";
    }
    return aux;
}
int main()
{
    cout << "El dia de la semana es: " << Semana(1);
    cout << "\nEl dia de la semana es: " << Semana(4);
    cout << "\nEl dia de la semana es: " << Semana(6);
}
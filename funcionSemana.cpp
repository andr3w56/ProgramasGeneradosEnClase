#include <iostream>

using namespace std;
// Una función recibe como parámetro 1 entero que indica el mes de año. 
// La función debe devolver el total de días que tiene ese mes. 
// Por ejemplo, si el mes es 3, debe devolver 31. Si el mes es 6, debe devolver 30. 
// Si el mes es 12 debe devolver 31. etc.

string TotalDias(int mes)
{
    string aux1;
    if (mes == 1)
        aux1 = "\n31";
    else if(mes == 2)
        aux1 = "\n29";
    else if(mes == 3)
        aux1 = "\n31";
    else if(mes == 4)
        aux1 = "\n30";
    else if(mes == 5)
        aux1 = "\n31";
    else if(mes == 6)
        aux1 = "\n30";
    else if(mes == 7)
        aux1 = "\n31";
    else if(mes == 8)
        aux1 = "\n31";
    else if(mes == 9)
        aux1 = "\n30";
    else if(mes == 10)
        aux1 = "\n31";
    else if(mes == 11)
        aux1 = "\n30";
    else if(mes == 12)
        aux1 = "\n31";
    return aux1;
}

// Una función recibe como parámetro 1 entero que indica el número de filas de un rectángulo. 
// Por ejemplo si la fila es 5, se imprimen 5 filas, como se muestra a continuación:

/* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * */

string Filas(int f)
{
    int i;
    while (i < f)
    {
        cout << "\n* * * * * * * * * *";
        i++;
    }
}


// Escriba la función que devuelve el factorial de un número. 
// El factorial se calcula solo si el número está entre 1 y 15. 
// Si el número no está en este rango, la función devuelve -1. 
void DevolverFactorial(int factorial)
{
    int n;
    int s = 1;
    int x;
    if (factorial >= 1; factorial <= 15)
    {
        for (int x = 1; x <= factorial;)
        {
            s = (s * x);
            x++;
            cout << "\n" << s;
        }
    }
    else
    {
        cout << "\n-1";
    }
}
// Una función recibe como parámetro 1 entero que indica el día de la Semana. 
// La función debe devolver el nombre del día de la semana. Por ejemplo, si es 1, devuelve "LUNES"
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
    

    Filas(5);
    cout << "\n";
    DevolverFactorial(6);
    cout << "\n" << TotalDias(5);
    cout << TotalDias(1);
    cout << TotalDias(2);
}
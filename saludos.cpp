//
// Created by estudiante on 20/6/2022.
//
#include <iostream>

using namespace std;
//Una function recibe como parámetro un entero que representa
//una tabla de multiplicar. La function debe imprimir la tabla
//de multiplicar. Desde el main, llame tres veces esta función.
void tablaMultiplicar (int tabla)
{
    cout<<endl<<"La tabla del: "<<tabla;
    for(int i=1; i<=12; i++)
    {
        cout<<endl<<tabla << " x " <<i << " = " <<(tabla*i);
    }
    cout<<endl;

}

//Una función recibe como parámetro un entero que representa un mes de año
//La función debe imprimir el nombre del ese mes
//Diseñe la función que envía un saludo
string NombreMes(int mes)
{
    string aux;
    if (mes == 1)
        aux = "\nEnero";
    else if(mes == 2)
        aux = "\nFebrero";
    else if(mes == 3)
        aux = "\nMarzo";
    else if(mes == 4)
        aux = "\nAbril";
    else if(mes == 5)
        aux = "\nMayo";
    else if(mes == 6)
        aux = "\nJunio";
    else if(mes == 7)
        aux = "\nJulio";
    else if(mes == 8)
        aux = "\nAgosto";
    else if(mes == 9)
        aux = "\nSeptiembre";
    else if(mes == 10)
        aux = "\nOctubre";
    else if(mes == 11)
        aux = "\nNoviembre";
    else if(mes == 12)
        aux = "\nDiciembre";
    else
        aux = "Invalido";
    return aux;
}
void saludo(string nombre, string genero)
{
    if (genero == "m")
        cout << "\nBienvenido a la PUCESE";
    else
        cout << "\nBienvenida a la PUCESE";
    cout << "\n++++++++++++++++++++++";
    cout << "'\n++++++HOLA " << nombre << "+++++++";
    cout << "\n++++++++++++++++++++++";
}
int main()
{
    cout << "\nEjemplo de una funcion que no devuelve valores";
    saludo("Juan", "m");
    saludo("Martha", "f");
    cout << endl << "El primer mes es: " << NombreMes(1);
    cout << endl << "El decimo mes es: " << NombreMes(10);
    cout << endl << "El septimo mes es: " << NombreMes(7);

    tablaMultiplicar(5);
    tablaMultiplicar(2);
    tablaMultiplicar(3);
    return 0;
}
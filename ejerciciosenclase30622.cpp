#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;

/*9. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. 
La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:
5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75 */

void Entero(int n){
  cout << "\nEjercicio 9:";
  for (int i; i <= 15; i++){
    cout << "\n" <<  n << " x " << i << " = " << (n*i);
  }
}
/*3. Escriba la función que determina si un número pasado como parámetro es par o impar.*/
void Multiplode2(int mult2){
  cout << "\n\nEjercicio 3:";
  if (mult2 % 2 == 0){
    cout << "\n" << mult2 << " Es par";
  }
  else{
    cout << "\n" << mult2 << " Es impar";
  }
}
/*4. Escriba la función que determina si un número pasado como parámetro es múltiplo de 5*/
void Multiplode5(int mult){
  cout << "\n\nEjercicio 4:";
  if (mult % 5 == 0){
    cout << "\n" << mult << " Es multiplo de 5";
  }
  else{
    cout << "\n" << mult << " No es multiplo de 5";
  }
}
/*11. Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:

Tabla del 1

1 x 1 = 1

1 x 2 = 2

...

1 x 10 = 10



Tabla del 2

2 x 1 = 2

2 x 2 = 4

...

2 x 10 = 20



Tabla del 3

3 x 1 = 3

3 x 2 = 3

...

3 x 10 = 30*/
void Tablas(int final){
  cout << "\n\nEjercicio 11:";
  if (final >= 1; final <= 10){
    for (int i = 1; i <= final; i++)
      for (int k = 1; k <= final; k++){
        cout << "\n" << i << " X " << k << " = " << (i * k);
    }
  }
}
/*16. Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++ */
void Filas(string f, int nf){
  cout << "\n\nEjercicio 16:\n";
   for(int i = 1; i <= nf; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << f;
        }
        cout << "\n";
    }
}
/*22. Escriba la función que recupera la hora actual de la computadora 
y la imprime por pantalla. Luego intente hacer el proceso para que la hora se actualice cada segundo.*/

void Tiempo(){
  cout << "\n\nEjercicio 22:\n";
    auto t = time(nullptr);
    auto tm = *localtime(&t);

    std::ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y %H:%M:%S");
    auto str = oss.str();

    cout << str << endl;

}
/*24. Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados. 
Por ejemplo si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45.*/
void Intercambio(int r, int s){
  cout << "\n\nEjercicio 24:\n";
  cout << s << " = " << r << endl;
  cout << r << " = " << s << endl;

}
/*18. Una función recibe 3 números enteros. 
La función devuelve verdadero si uno de esos números es la suma de los otros dos.*/
void Sumadelos3(int f, int g, int h){
  cout << "\n\nEjercicio 24:\n";
  if (f + g == h){
    cout << "Verdadero";
  }
  else if (f + h == g){
    cout << "Verdadero";
  }
  else if (g + h == f){
    cout << "Verdadero";
  }
  else{
    cout << "Falso";
  }
}
int main(int argc, char *argv[]) {
  Entero(5);
  Multiplode2(60);
  Multiplode5(20);
  Tablas(3);
  Filas("*", 4);
  Tiempo();
  Intercambio(45, 50);
  Sumadelos3(5, 10, 5);

  return 0;
}

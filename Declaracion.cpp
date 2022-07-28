#include <iostream>
int main(){
    //inicializar el vector en la declaracion 
    int edades[5] = {10,11,45,76,1};


    //cambio un elemento del vector 
    edades[4] = 11; //reemplaza el 1 por el 11

    //imprimir todo el vector 
    for (int k = 0; k < 5; k++)
        std::cout << "El elemento de la posicion " << k << " es : " << edades[k] << std::endl;;
    return 0;
}
#include <iostream>
int main(){
    //inicializar el vector en la declaracion 
    int edades[5] = {10,11,45,76,1};


    //cambio un elemento del vector 
    edades[4] = 11; //reemplaza el 1 por el 11

    //imprimir todo el vector 
    for (int k = 0; k < 5; k++){
        std::cout << "El elemento de la posicion " << k << " es : " << edades[k] << std::endl;
    }
    // Declare un vector o string y agregue 7 nombres de ciudades. Luego imprima todo el vector
    std::string ciudades[7] = {"Esmeraldas", "Quito", "Guayakill", "Azuay", "Manabí", "Santo Domingo", "Galápagos"};
    for(int k = 0; k < 7; k++){
        std::cout << " " << ciudades[k] << std::endl;
    }
    return 0;
}
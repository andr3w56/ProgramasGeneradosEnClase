#include <iostream>

int main(int argc, const char** argv) {
    int x[5]; //Declaración de un vector de enteros.
    x[0] = 10;
    x[2] = 20;
    x[3] = 18; //Iinicializar el vector de manera manual.
    x[4] = 19;

    std::cout << x[0] << std::endl; //Imprime ciertos elementos del vector
    std::cout << x[5] << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << " " << x[i] << std::endl;
    }
    
    return 0;
}
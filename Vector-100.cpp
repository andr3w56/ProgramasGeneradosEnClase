#include <iostream>
#include <time.h>
#include <stdlib.h>
/*Tarea:
Usando vectores se pide:
1) Declare un vector de 100 enteros para registrar las notas de 100 estudiantes
2) Ingrese las notas de estos 100 estudiantes. Alternativa: llene el vector con números aleator
3) Calcular la sumatoria y el promedio
4) Encontrar la nota máximal*/
int NumeroRandom(){
    int NR = (rand() % 10) + 1;
    return NR;
}
int main(int argc, char const *argv[]){
    srand(time(NULL));
    int x[100]; // 1) Se declara el vector.
    int Sumatoria = 0;
    for (int i = 0; i < 100; i++){
        x[i] = NumeroRandom();
        std::cout << "La nota del estudiante " << i + 1 << " es: " << x[i] << std::endl; // Se llena el vector de numeros aleatorios.
        if (x[100] == 10){
            std::cout << "La nota máxima es: 10" << std::endl; // La nota máxima es 10.
        }
    }
    for (int k = 0; k < 100; k++){// Bucle para sumar todos los números.
        int Nactual = x[k];
        Sumatoria += Nactual;
    }
    float p = float(Sumatoria);
    std::cout << "La sumatoria total es: " << Sumatoria << std::endl;
    std::cout << "El promedio es: " << p / 10 << std::endl; // Se calcula la sumatoria y el promedio.

    return 0;
}

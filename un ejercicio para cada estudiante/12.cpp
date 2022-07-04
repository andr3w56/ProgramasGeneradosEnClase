#include <iostream>
#include <math.h>
using namespace std;
void Valores(float a, float b, float c){
    float x1, x2;
    float x = (b*b) - (4*a*c); 
    
    if (x <= 0){
        x = x*(-1);
        cout<<"Solución solo en números complejos"<<endl;
        cout<<"Solución en numeros complejos: " <<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i y "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
    }else{

        x1 = (-b + sqrt(x)) / (2*a);
        x2 = (-b - sqrt(x)) / (2*a);
        
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
}
int main(){
    Valores(5, 4, 12);
    return 0;
}
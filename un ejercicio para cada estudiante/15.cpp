#include <iostream>
#include <cmath>
using namespace std;


void sumatoria(int n){
	int resultado;
	int factorial;
	for(int f=2; f<=n; f++){
		factorial=factorial*f;
	    if(factorial % 2==0){
		    resultado= factorial- resultado ;
	    }
	    else {
		    resultado=  resultado + factorial ;
	    }
}   
    cout<<"El resultado de la serie es: "<<resultado;
}
int main()
{
    sumatoria(7);
}
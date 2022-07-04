#include <iostream>
#include <cmath>
using namespace std;


void ReFactorial(int n){
	int r; long int f = 1;
	for(int i = 2; i <= n; i++){
		f *= i;
	    if(f%2 == 0){
		    r = (-f) - r;
	    }
	    else{
		    r = f + r;
	    }
}   
    cout<<"El resultado de la serie es: "<< r << endl;
}
int main(int argc, char const *argv[])
{
	ReFactorial(7);
	return 0;
}

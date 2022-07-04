#include <iostream>
#include <cmath>
using namespace std;

void FiguraEspejo(int circulo)
{
    int  columna;
    string figura="o";
    for (int i=1; i<=circulo; ++i){
        for(int k=1; k<=i; ++k){
     cout<<figura;
    }
    cout<<endl;
    }
}
int main()
{
    FiguraEspejo(8);
    return 0;
}
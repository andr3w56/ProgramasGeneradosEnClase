#include <iostream>
using namespace std;

int main() {
int tabla;
    do
    {
    cout <<  "Ingrese un numero ";
    cin >> tabla;
    
    int i = 1;
    if (tabla > 0)
    {
    while (i <= 10)
     {
        cout << "\n" << tabla << " \033[1;31mX\033[0m " << i << " = " << (tabla * i) << endl;
        i++;
     }
    }
    else
    {
        return 0;
    }
    }
    while(tabla > 0);
}
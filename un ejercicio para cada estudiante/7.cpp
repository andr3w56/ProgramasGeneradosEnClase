#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
size_t countDigits(T n)
{
    string tmp;

    tmp = to_string(n);
    return tmp.size();
}


void Cifras(int num1, int num2){
    cout << "El numero de cifras en " << num1 << " es igual a: " << countDigits(num1) << endl;
    cout << "El numero de cifras en " << num2 << " es igual a: " << countDigits(num2) << endl;
}

int main(int argc, char const *argv[])
{
    Cifras(25, 900);
    return 0;
}

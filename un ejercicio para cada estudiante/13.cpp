#include <iostream>
#include <cmath>
using namespace std;

void Recursion(int n){
    int r = 0;
    for(int i = 1 ; i <=  n; i ++){
        if(i%2 == 0){
            r += i;
        }else{
            r -= i;
        }
    }
    cout << r << endl;
}
int main(int argc, char const *argv[])
{
    Recursion(7);
    return 0;
}

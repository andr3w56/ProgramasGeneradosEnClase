#include <iostream>
using namespace std;

void re(int a){
    for(int i = 1;i <= a;i++){
        int b;
        b = i % 2;
        int y;
        if (b == 1){
            y = i * 1;
            cout << endl << y;    
        }
        else{
            y = i * -1;
            cout << endl << y;
        }
    }   
}
int main(){
    re(5);
    return 0;
}
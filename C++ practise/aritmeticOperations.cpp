#include <iostream>
using namespace std ;
#include <cmath> 
int main( ){
    int a=45;
    int b=24;
    int c = 23;
    if (a>=b &&b>=c){
        cout << a << " " << b << " " << c << endl;
    }else if (b>+a && a>=c){
        cout << b << " " << a << " " << c << endl;
    }
    else {
        cout << c << " " << b << " " << a << endl;
    }
    return 0 ;
}
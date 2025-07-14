#include <iostream>
#include "calc.h"

using namespace std;
using namespace Calc;
int main(){
    int a = 10;
    int b = 6;

    cout <<"a+b="<< add(a,b)<<endl;
    cout <<"a-b="<< sub(a,b)<<endl;
    cout <<"a*b="<< mul(a,b)<<endl;
    cout <<"a/b="<< Calc::div(a,b)<<endl;
}
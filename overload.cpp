#include <iostream>
using namespace std;
int add(int a , int b){
    return a+b;
}
double add(double a , double b){
    return a+b;
}
int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2.3,2.5)<<endl;
}
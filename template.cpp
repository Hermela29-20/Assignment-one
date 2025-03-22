#include <iostream>
using namespace std;
template <typename T>
T add(T a , T b){
    return a+b;
}
int main (){
    cout<<"the sum is "<<add(2.4,2.8)<<endl;
    cout<<"the sum is "<<add(2,1)<<endl;
    cout<<"the sum is "<<add(2.3,4)<<endl;
    return 0;
}
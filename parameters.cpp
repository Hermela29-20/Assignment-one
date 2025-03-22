#include <iostream>
using namespace std;
template <typename... values>
auto add(values... values){
    return(values+...);
}
int main(){
cout<<"the sum is"<<add(2,3)<<endl;
cout<<"the sum is"<<add(2,3,5)<<endl
}

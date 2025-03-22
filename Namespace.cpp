#include <iostream>
using namespace std;
namespace Mytype{
    int add(int a , int b){
        return a+b;
    }
}
int main(){
    std::cout<<"the sum is"<<mytype::add(2,4)<<std::endl;
    return 0;
}
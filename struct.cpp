#include <iostream>
#include <string>
using namespace std;
struct employee{
    int age;
    string name;
    int id;
} jacob,patricia;


int main(){
    jacob.age=5;
    jacob.name="jacob";
    jacob.id=5;
    cout<<jacob.id<<endl;
    cout<<jacob.name<<endl;
    cout<<jacob.age<<endl;
    return 0;
}

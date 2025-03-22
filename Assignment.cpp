#include <iostream>
#include <string> 
#define TaxRate 0.05
using namespace std;
int main(){
    cout<<"Welcome to the store!"<<endl;
    cout<<"Here we can calculate the sale, total revenue and the inventory status"<<endl;
    cout<<"REMINDER!! C++ is a complied language"<<endl;
    string productName;
    int productCat;
    int initialInv;
    float productPrice;
    int itemSold;
    int newInventory;
    float totalSalesAmount;
    string inventoryStatus;
    const float taxRate=0.05f;
    cout<<"enter the product name"<<endl;
    cin>> productName;
    cout<<"enter the product catagory"<<endl;
    cin>>productCat;
    cout<<"enter the initial inventory: "<<endl;
    cin>>initialInv;
    cout<<"enter product price"<<endl;
    cin>>productPrice;
    cout<<"enter the number of item sold"<<endl;
    cin>>itemSold;
    newInventory=initialInv-itemSold;
    totalSalesAmount=itemSold*productPrice;
    inventoryStatus=(newInventory<10)? "low inventory":"sufficient inventory";
    auto saleCopy = totalSalesAmount;
    decltype(initialInv) inventoryHelper= newInventory;
    if (productCat<1 || productCat>5){
        cout<<"invalid catagory, must in the range between 1 and 5"<<endl;
    }
    switch (productCat){
        case 1: cout<<"catagory 1: electronics"<<endl;
        break;
        case 2 :cout<<"catagory 2 : groceries"<<endl;
        break;
        case 3: cout<<"catagory 3 : clothing"<<endl;
        break;
        case 4: cout<<"catagory 4 : stationary"<<endl;
        break;
        case 5 : cout<<"catagory 5 : miscellaneous"<<endl;
        break;
    }
    cout<<"printing receipt"<<endl;
    for (int i=1; i<=itemSold;i++){
        cout<<"item"<< i <<": $"<<productPrice<< endl;
        }
        cout<<"Product name"<< productName<<endl;
        cout<<"Catagory : "<<productCat<<endl;
        cout<<"Initial Inventory : "<<initialInv<<endl;
        cout<<"Product Price : "<< productPrice<<endl;
        cout<< " Item sold : "<<itemSold<<endl;
        cout<<"New inventory : "<< newInventory<<endl;
        cout<<"Total sales Amount : "<<totalSalesAmount<<endl;
        cout<<"Inventory status : "<<inventoryStatus<<endl;
        cout<<"Tax rate : "<< TaxRate *100<<endl;
        cout<<"Tax Rate : "<< taxRate * 100 << endl;
        cout<<"Helper Sales Amount : "<<saleCopy<<endl;
        cout<<"Helper Inventory Value : "<<inventoryHelper<<endl;
    return 0;
}
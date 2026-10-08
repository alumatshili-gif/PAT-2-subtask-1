#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
const int MAX_ORDERS =100;//Maximum orders system can hold
const double PRICE_PER_MAGWINYA =8.50; //Cost per unit//GLOBAL PARALLEL ARRAYS====
int orderIDs[MAX_ORDERS];
string customerNames[MAX_ORDERS];
int quantities[MAX_ORDERS];
double totalPrice[MAX_ORDERS];
int orderCount=0
//====FUNCTION PROTOTYPES====
 void add Order();
void displayAllOrder();
void searchOrder();
void showMenu();
//====MAIN====
int main(){
    int choice;
    do{
        showMenu();
        cout<<"Enter your choice:";
        cin>>choice;
        cin.ignore();//Clear newline from buffer
        switch (choice) {
        case 1:
            addOrder();
            break;
        case 2:
            displayAllOrders();
            break;
        case 3:
            searchOrder();
            break;
        case 4:
            cout<<"Thank you for using Magwinya Magic Orders !\n";
            break;
        default:
            cout<<"Invalid option! Please enter 1-4.\n";
        {
    }while (choice!=4);
    return 0;
}
//====ADD NEW ORDERS====
void addOrder(){
    if (orderCount>=MAX_ORDERS){
        cout<<"System full! Cannot add more orders.\n";
        return;
    }
    cout<<"\n---Add New Order ---\n";
    cout<<"Enter Order ID:";
    cin >>orderIDs[orderCount];
    cin.ignore();
    cout<<"Enter Customer Name: ";
    getline(cin,customerNames[orderCount]);
    cout<<"Enter Quantity(number of magwinya):";
    cin>>quantities[orderCount];
    //Calculate total price
    totalPrices[orderCount]=quantities[orderCount] *PRICE_PER_MAGWINYA;
    orderCount++;
    cout<<"Order added successfully!\n\n";
    {
    //====DISPLAY ALL ORDERS ====
    void displayAllOrder(){
        if (ordeCount==0) {
            cout<<"nNo orders to display yet.n\n";
             return;
        }
        cout<<"\n=========ALL ORDERS ==========\N";
        cout<< left<<setw (10)<<"OrdersID"
            <<setw(20)<<customerNames[i]
            <<setw(10)<<quantities[i]
            <<"R"<<fixed<<setprecision(2)<<totalPrice[i]<<"\n";

    }
    cout<<"===========================\n\n";
    }
    //===SEARCH ORDER BY ID===
    void searchOrder(){
        int searchID;
        bool found = false;
        cout<<"\nEnter Order ID to search:";
        cin >>searchID;
        for (int i=0 ;i < orderCount;i++){
            if (orderIDs[i]==searchID){
                cout <<"\n---Order Found---\n";
                cout<<"Order ID:     "<<orderIDs[i]<<"\n";
                cout<<"Customer:    "<< customerName[i]<<"\n";
                cout<<"Quantity:    "<<quantities[i]<<"magwinya\n";
                cout<<"Total Price:   R"<<fixed << setprecision(2)<<totalPrice[i]<<"\n\n";
                found =true;
            }
        }
        if(!found) {
            cout<<"Orde ID "<<searchID <<"not found .\n\n";
        }
    }
    //===MENU===
    void showMenu() {
        cout <<"===MAGWINYA MAGIC ORDERS SYSTEM===\n";
        cout<<"1. Add New Orde\n";
        cout<<"2. Display All Orders\n";
        cout<<"3. Search Orders \n";
        cout<<"4. Exit\n";
        cout<<"=============================\n;
}

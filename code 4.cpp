
#include <iostream>

using namespace std;

//=====FUNCTION PROTOTYPE=====
double celsiusToFahrenheint(double c);
double fahrenheitToCelsius(double f);
double metersToTeet(double m);
double feetToMeters(double ft);
void displayMenu();

//=====MAIN PROGRAM====

int main()
{
    int choice;
    double value,result;
    do{
        displayMenu();
        cout<<"Enter your choice(1-5):";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter temperature in Celsius:";
            cin>>value;
            results=celsiusToFahrenheit(value);
            cout<<fixed<<setprecision(2);
            cout<<value<<"C="<<results <<"F\n\n";
            break;
        case 2:
            cout<<"Enter temperature in Fahrenheit:";
            cin >> value;
            results=fahrenheitToCelsius(value);
            cout<<fixed <<setprecision(2);
            cout<<value<<"F=" <<results <<"C\n\n";
            break;
        case 3:
            cout <<Enter length in meters:";
            cin <<value ;
            results=metersToFeet(value);
            cout<< fixed << setprecision(2);
            cout<< value <<"m =" << results << ft\n\n";
            break;
        case 4:
            cout<<"Enter length in Feet:";
            cin >> value;
            results =feetToMeters(value);
            cout <<fixed << setprecision(2);
            cout <<value << "ft = "<< results << "m\n\n";
            break;
        case 5:
            cout << "Exixting program...\n";
            break;
        default :
            cout << "Invalid choice ! Please try again.\n\n";
        }
    }while (choice !=5);
     return 0;

}
//=====FUNCTION DEFINITIONS=====
double celsiusToFahrenheint(double c){
    return(c*9.0/5.0)+ 32.0;
}
double fahrenheitToCelsius(double m){
    return (f - 32.0)*5.0 / 9.0;
}
double metersToTeet(double m){
    return m * 3.28084;
}
double metersToTeet(double ft){
    return ft / 3.28083;
}
void displayMenu() {
    cout << "====UNIT CONVERTER MENU ====\n";
    cout <<"1 . Celsius to Fahrenheit\n";
    cout <<"2. Fahrenheit to Celsius\n";
    cout<<"3. Meter to Feet\n";
    cout <<"4.Feet to Meters\n";
    cout <<"5. Exit\n";
    cout << "=============================\n";

}
Copyright reserved
 

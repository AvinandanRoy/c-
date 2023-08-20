#include<iostream>
using namespace std ;

int main()
{
    const int age = 19 ;
    const float pi = 3.1416 ;
    cout << age << "\n";
    cout<< pi << "\n";
    int a = 5 ;
    double remainder = a/ 2 ;
    cout << remainder << "\n";

    string name ;
    cin >> name ;
    cout << name << "\n";

    //comparison operator
    int x = 89 ;
    int y = 40 ;
    cout << (x> y)<< "\n";
    cout << (x< y) << "\n";

    string firstName = "Avinandan";
    string lastName = "Roy";
    string fullname = firstName +" " + lastName;

    cout << fullname << "\n";
}

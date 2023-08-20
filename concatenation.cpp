#include<iostream>
using namespace std ;

int main()
{
    string firstName , lastName , fullName ;
    cin >> firstName >> lastName ;
    fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    //append system concatinous
    string fatherFirstName , fatherSecondName, fatherfullName;
    cin >> fatherFirstName >> fatherSecondName ;
    fatherfullName = fatherFirstName + " " + fatherSecondName;
    cout << "Father name is : "+fatherfullName;
}

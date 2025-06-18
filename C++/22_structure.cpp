#include<iostream>
using namespace std;

int main(){

 struct { //struct is advance from of arrays which store multiple data types
    string brand;
    string model;
    int year;
 } myCar1 , myCar2; //declaring 2 structure at same time

 // Put data into the first structure 
 myCar1.brand = "BMW";
 myCar1.model="X5";
 myCar1.year = 2016;

 myCar2.brand = "Audi";
 myCar2.model="Mustang";
 myCar2.year = 2018;

 // Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    return 0;
}
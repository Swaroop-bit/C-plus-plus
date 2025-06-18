#include<iostream>
#include<string>
using namespace std;

int main(){

int myNumbers[5] = {10,20,30,40,50};
cout << sizeof(myNumbers)<<"\n";
//output is 20 cuzi it return in bytes so int has 4 byte (4 x 5 = 20)
    

int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[4]);
cout << getArrayLength;
//
return 0;
}
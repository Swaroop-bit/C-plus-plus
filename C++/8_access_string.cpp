#include<iostream>
#include<string>
using namespace std;

int main(){

string myString = "Hello";
string firstName = "John";
string lastName = "Doe";
cout<< myString[0]<<"\n";//myString.at(0) also can be used to access the single char

cout<< myString[2]<<"\n";

cout<< myString[myString.size()-1]<<"\n";

cout<< myString.size();
return 0;
}

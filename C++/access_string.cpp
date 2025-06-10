#include<iostream>
#include<string>
using namespace std;

int main(){

string myString = "Hello";
cout<< myString[0]<<"\n";

cout<< myString[2]<<"\n";

cout<< myString[myString.size()-1]<<"\n";

cout<< myString.size();
return 0;
}

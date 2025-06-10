#include<iostream>
#include<string>
using namespace std;

int main(){

  string myString="Bakka Bakka";
  
  myString[0]='H';
  cout << myString.at(0)<<"\n";
  
  cout<< myString;
  return 0;
}
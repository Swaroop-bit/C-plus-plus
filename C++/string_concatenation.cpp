#include<iostream>
#include<string>
using namespace std;

int main(){

  string a="Hello\t";
  string b="World";
  string c= a.append(b);

  cout<<c;

    return 0;
}
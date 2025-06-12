#include<iostream>
#include<string>
using namespace std;

int main(){

  string fullName;
  getline(cin,fullName);//cin is not used as it doesnt capture spaces
  cout << "Your name is" << fullName;


    return 0;
}
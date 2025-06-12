#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

   int doorCode;
   cout<<"Enter The Code\n";
   cin>> doorCode;

   if(doorCode == 1337){
    cout<< "The code was correct ";
   }
   else{
    cout<<"The code was incorrect";
   }

 return 0;
}
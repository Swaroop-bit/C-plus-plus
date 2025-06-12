#include<iostream>
#include<string>
using namespace std;

int main(){

   int sam ;
   cout<<"Enter the number\n ";
   cin>> sam;

   switch(sam){

    case 1:
    cout<< "Monday";
    break;
   
   case 2:
   cout<<"Tuesday";
   break;

   case 3:
   cout<<"Wednesday";
   break;
     
  case 4:
  cout<<"Thursday";
  break;

  case 5:
  cout<<"Friday";
  break;

  default:
  cout<<"Omg";

   }
    return 0;
}
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
 for(int i=n;i>=1;i--){
    fact *=i;
 }
 return fact;
}
int main(){

cout<<"the factorial of 6 is "<<factorial(6);
    return 0;
}
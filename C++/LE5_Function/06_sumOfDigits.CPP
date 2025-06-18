#include<iostream>
using namespace std;

int sum(int num){
    int lastDig=0;
     int digitSum =0;
     while(num>0){
        lastDig = num%10;
        num = num/10;
        digitSum += lastDig;
     }
     return digitSum;
}
int main(){

    cout<<sum(85);

    return 0;
}

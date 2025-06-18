#include<iostream>
using namespace std;

//sum of 2 numbers
int sum(int a, int b){
    return a + b;
}
//min of 2 numbers
int min(int a, int b){
    if(a>=b) return b;
    return a;
}
// parameters are inserted in function
int main(){
    cout << sum(34,343)<<endl;//34,353 are "arguments"
    //REDUNDANCY will happen if we not use fnc , unnecessary repetition
    cout<<min(3254,425);
    return 0;
}
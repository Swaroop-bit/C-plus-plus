#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
for(int i=1;i<=n;i++){
sum +=i;
}
return sum;
}

int main(){

int k=sum(10);
cout<< "the sum of the digits upto 10 is"<<k;
    return 0;
}
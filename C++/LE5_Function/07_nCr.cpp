#include<iostream>
using namespace std;

float fact(int a){

float mult = 1;
for(float i = 1;i<=a;i++) mult*=i;
return mult;
}

float nCr(int x ,int y){
    float nfact = fact(x);
    float rfact = fact(y);
    float Cfact = fact(x-y);

    return ((nfact)/(rfact*Cfact));

}
int main(){
cout<<"The nCr for 5C2 is"<< nCr(5,2);


    return 0;
}
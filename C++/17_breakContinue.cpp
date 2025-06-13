#include<iostream>
#include<string>
using namespace std;

int main(){

    for(int i = 0; i<10 ; i++){
        if(i==6) break;//break the iteration and print beofr 6
        cout<<"the number is"<<i<<"\n";
    }

      for(int j = 0; j<10 ; j++){
        if(j==6) continue;//only break the current iteration and rest is continue
        cout<<"the number is"<<j<<"\n";
    }

    return 0;
}
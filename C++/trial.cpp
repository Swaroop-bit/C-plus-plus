// #include<iostream>
// using namespace std;

// int main(){

// int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout<< i <<"\n";  
// }
// return 0;
// }
#include<iostream>
using namespace std;

int binDec(int a){
    int pow = 1;
    int result =0;
    while(a>0){
   int rem = a%10;
   a/=10;
   result += (rem*pow);
   pow *=2;
}
return result;
}

int main(){

cout<<binDec(10);

    return 0;
}
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){

// int ages[]= {20,22,18,35,48,26,87,70};
// float sum;
// for(float f : ages){
// sum += f;
// }
// float length = sizeof(ages)/sizeof(ages[0]);
// float average = sum / length;

// cout<<"the average is :"<<average;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(){

 int ages[] = {20,22,18,35,48,26,87,70};

 int i = ages[0];

 for (int age : ages){
    if(i>=age){
        i=age;
    }
 }

cout<<"the minimum age is"<<i;

    return 0;
}
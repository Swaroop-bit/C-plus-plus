#include<iostream>
#include<cmath>
#include<string>
using namespace std ;

int main(){

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}


string word = "Hello";
for (char c : word) {
  cout << c << "\n";
}


string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << i << " = " << cars[i] << "\n";
}

    return 0;
}
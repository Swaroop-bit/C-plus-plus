#include <iostream>
#include <string>
using namespace std;
//A reference variable is an alias for an existing variable. It is created using the & operator:
int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";

string food1 = "Pizzaaadad"; // A food variable of type string
cout << food1;  // Outputs the value of food (Pizza)
cout << &food1; // Outputs the memory address of food (0x6dfed4)

  return 0;
}

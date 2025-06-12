#include <iostream>
#include <string>
using namespace std;

int main()
{

    string firstName = "John";
    string lastName = " Doe";
    firstName.append(lastName);
    // A string in C++ is actually an object, which contain functions that can perform certain operations on strings...Append is a function
    cout << firstName<<"\n";

    string txt ="sfhsdvfhjsvdggbs";
    cout << "The length of the text string is :"<< txt.size();

    string txt = "We are the so-called \"Vikings\" from the north.";
    //   \",\',\\ are used to add these in string-----> \n(New line)  \t(Tab)
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void unmatched(string s1, string s2){ //function created
    int num = 0;
    int num2  = 0;
  
    for (int i = 0; i < s1.length(); i++) { //for loop for initilization
        if (s2.find(s1[i]) != 1 && num2 == s1.find(s1[i])){ //checks if s1 is not in s2
            num=num+1;
            num2=num2+1;
        } //end of if loop
    }
    cout << "There are "<< num<<" unmatched letters."; //
}
int main() //main function to test
{
    string s1 = "abc";//provided input
    string s2 = "bbcef";//provided input
    unmatched(s1, s2); //call of the unmatched function
}

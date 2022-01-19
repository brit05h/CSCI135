/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 13D

In the same program, add a new function, bool isAlphanumeric(string s);
which returns true if all characters in the string are letters and digits
, otherwise returns false.You may use the string function substr(pos, len),
which extracts a substring. It takes two parameters, the starting position 
and the length of the substring. 
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printRange(int left,int right); //Part A function provided
int sumRange(int left, int right);  //Part B function provided
int sumArray(int *arr, int size);   //Part C function provided
bool isAlphanumeric(string s);      //Part D funtion provided

//Part D:
bool isAlphanumeric(string s){
    if(s.empty()){
        return true;
    }
    return isalnum(s[0]) && isAlphanumeric(s.substr(1));
}

//Part C:
int sumArray(int *arr, int size){
    if(size == 0){
        return 0;
    }
    int index=size-1; //the index we want
    int element = arr[index]; //same as *(arr+index);
    return element + sumArray(arr, size-1);
}

//Part B:
int sumRange(int left, int right){
    if (left>right){
        return 0;
    }
    return left + sumRange(left + 1, right); //compute values with recursive call
}


//Part A:
void printRange(int left,int right){    //range is empty and base
    if(left>right){                     //case is when we want to stop
        return;                         //printing numbers
    }
    cout<<left<<" ";    //make recursive call to print next values
    printRange(left + 1, right);
}

//Part D main function:
int main(){
    cout<<boolalpha; //prints values as true or false
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
}

//Part C main function:
/*int main() {

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
}
*/

//Part B main function: 
/*int main() {
    int x = sumRange(1, 3);
    cout << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << y << endl;   // 52
}
*/
//Part A main function :
/*int main() { 
      printRange(-2, 10);
}
*/


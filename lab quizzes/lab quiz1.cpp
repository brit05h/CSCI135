//name:Britney Huiracocha
//email:britney.huiracocha44@myhunter.cuny.edu
//date:September 4, 2021
//this program enters an integer and prints I love C++ that amount of times

#include <iostream>  //libraries
using namespace std;
int main(){ //main function
	int num; //declaring integer variable
	cout<<"Enter an integer:"; //ask user for input 
	cin>>num; //input which is an int, amount of times it will display statement
	for (int i=0; i<num; i++){ //for loop for the recurrent pattern
		cout<<"I love C++"<< endl; //statement repeating
	}
	return 0;
}

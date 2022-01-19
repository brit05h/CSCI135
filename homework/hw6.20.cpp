/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: HW E6.20

Write a function
vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector.
Keep an index into each vector, indicating how much of it has been
processed already. Each time, append the smallest unprocessed element 
from either vector, then advance the index.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> merge_sorted(vector <int> a, vector<int> b){
	vector<int> merge;
	for (int i = 0; i < a.size(); i++){
		merge.push_back(a[i]);
	}
	for (int i = 0; i < b.size(); i++){
		merge.push_back(b[i]);	
	}
	sort(merge.begin(), merge.end());
	return merge;
}

int main(){     //main function
	int input;
	vector<int>first;
	for (int i = 0; i < 6; i++){
		cin >> input;
		first.push_back(input);
	}
	vector<int>second;
	for (int k = 0; k < 6; k++){
		cin >> input;
		second.push_back(input);
	}
    sort(first.begin(), first.end());
	sort(second.begin(), second.end());
	
	vector<int>sorted = merge_sorted(first, second);
	for (int j = 0; j < sorted.size(); j++){
		cout << sorted[j] << " ";
	}
}
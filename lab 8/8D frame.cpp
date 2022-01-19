/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab 8D

Write a program frame.cpp. Same as the previous 
task, but it should be a frame exactly one pixel thick.
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream> //includes readimage

using namespace std;

//GLOBALS (eventhough he is too big to say use globals yourself)
const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}

void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl; //lol
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	
	
	
	int out[MAX_H][MAX_W];
	int middle_h = h/4;
	int middle_w = w/4;

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			if((middle_w == col || middle_w*3 == col) && (middle_h < row && middle_h*3 > row)){ // && (quarterh < row && quarterh*3 > row)){
				out[row][col] = 255;
			}
			else if((middle_h == row || middle_h*3 == row) && (middle_w <= col && middle_w*3 >= col)){ // && (quarterh < row && quarterh*3 > row)){
				out[row][col] = 255;
			}
			else{
				out[row][col] = img[row][col];
			}
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

}
/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab 8G

Write a program kernel.cpp. Kernel method image filtering
A sliding window operator replaces each pixel with some function of its 8
neighbors (and itself).
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

int kernaledge(int img[MAX_H][MAX_W], int h, int w, int atrow, int atcol){
	// Check if this is a literal edge case
	int f;
	if(atcol==0 || atcol==h-1 || w==0 || atrow==w-1){
		return 0;
	}
	else{
		// . . . . . .
		// . . . . . .
		// . a b c . . 
		// . d e f . .
		// . g h i . .
		// . . . . . .		f = (g+2*h+i)-(a+2*b+c)
		int c = img[atcol-1][atrow-1];	int f = img[atcol][atrow-1];	int i = img[atcol+1][atrow-1]; 
		int b = img[atcol-1][atrow]  ;	int e = img[atcol][atrow]  ;	int h = img[atcol+1][atrow]  ; 
		int a = img[atcol-1][atrow+1];	int d = img[atcol][atrow+1];	int g = img[atcol+1][atrow+1];
		f = (g+2*h+i)-(a+2*b+c);
		if(f <   0){
			f = 0;
		}
		if(f > 255){
			f = 255;
		}
		return f;
		}
	}

// http://paulcuth.me.uk/netpbm-viewer/
int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w);
	/* read it from the file "inImage.pgm"
	h and w were passed by reference and
	now contain the dimensions of the picture
	and the 2-dimesional array img contains the image data
	Now we can manipulate the image the way we like
	for example we copy its contents into a new array
	*/
	
	int out[MAX_H][MAX_W];
	int temp;
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			out[row][col] = kernaledge(img, h, w, col, row);
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

}
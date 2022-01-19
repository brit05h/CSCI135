/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab Quiz 10
The program will modify the original image to be a checkerboard of black pixels and original images' pixels
*/

#include<iostream>
using namespace std;

int main(){
    int img[MAX_H][MAX_W];  //2D array of height and width of image
    int h,w; //declare h and w as variables
    readImage(img,h,w); //image read 
    int out[MAX_H][MAX_W]; //output image declared
    for(int row=0;row<h;row++){ //
        for(int col=0;col<w;col++){
           //INSERT CODE HERE
           if(row==0 || row%2==0){
               if(col==0 || col%2==0){
                   out[row][col]=0; //[][] signifies 2D array in which will be 0 so black
               }
           }
           else if(col%2 != 0){
               out[row][col] = img[row][col]; //pixel will stay orginal image's pixel
           }
        }
    }
    writeImage(out,h,w);
    return 0;
}
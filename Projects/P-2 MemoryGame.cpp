#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
using namespace std;

int* randomize(int numSpaces); //function to randomize layout
void swap(int* arr, int i, int j);
void displaySeparateLine(int numSpaces);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor, 
    //set numPairs = 3, numSpaces = 2 * numPairs + 2,
    //put 3 pairs of randomly generated ints in [0, 1000)
    //randomly in numSpaces blocks. 
    //Note that 2 added after 2 * numPairs means number of 
    //two extra blocks without actual data.
{
    //srand(time(NULL)); //TODO: uncomment this line to see
        //different layouts of numbers in different runnings.
        //time(NULL) is the current running time.
        //use the current running time to grow random sequence
        //Since running time differs,
        //the random sequence looks different
        //at different running time.
    srand(1); //TODO: add this before submitting to gradescope,
        //or autograde script cannot handle random input.

    //TODO: your code here
    numPairs = 3;
    numSpaces = 8;

    //get numPairs random int in[0,1000)
    //put numbers randomly into array values
    //int data[numPairs];//not work, we apply for an array
    int* data = new int[numPairs];
    for (int i = 0; i < numPairs; i++)
        data[i] = rand() % 1000;

    values = new string[numSpaces];
    int* arr = randomize(numSpaces);
    //better to have no two ints the same
    for (int i = 0; i< numSpaces; i++){
        if(i < numPairs * 2){
            values[arr[i]] = to_string(data[i/2]); //to_string converts int to string
            values[arr[i+1]] = to_string(data[i/2]);
        }
        else values[arr[i]] = "";
    }

    delete[] data;
    data = nullptr;
}

//TODO: implement by students
MemoryGame::~MemoryGame()
{
    //When an object is no longer in need,
    //release dynamically allocated memory by 
    //data members of the current object.
    delete[] values;
    values = nullptr;

}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector 
//to array values
int* randomize(int size)
{
    //idea to randomize 0, 1, 2, 3, 4, 5,
    //generate a random int in [0, 6), say 3,
    //then move arr[3] to the end,
    //say, 0, 1, 2, 5, 4, 3
    //generate a random int in [0, 5), say 3 again,
    //then swap arr[3], which is 5 now, with arr[4], 
    //get 0, 1, 2, 4, 5, 3
    //generate a random int in [0, 4), say 2,
    //swap arr[2] with the current arr[3]
    //get 0, 1, 4, 2, 5, 3
    //continue to randomize arr[0..2].
    //afterwards, continue to randomize arr[0..1].
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i]=i;
    //generate a random int in [o,size]
    int index;

    while(size > 0){
        index = rand() % size;
        swap(arr,index,size-1);
        size--;
    }
    /*
    index = rand() % (size-1);
    swap(arr, index, size-2);

    index=rand() % (size-2);
    swap(arr, index, size-3);
    */
   return arr;
}

//TODO: implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int *arr, int i, int j)
{
    int temp = arr[i]; //arr[i] can be written as *(arr+i)
    arr[i] = arr[j];
    arr[j] = temp;
}

//Display -----+ for numSpaces times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSpaces is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSpaces)
{
    for (int i = 0; i < numSpaces; i++)
    {
        if (i == 0)
           cout << "+";
        cout << "-----+";
    }
    cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown)
{
    //display label 
    cout << " "; //one space before the label 
    for (int i =0; i < numSpaces; i++){
        cout << setw(3) << i;
        cout << setw(3) << " ";
    }
    cout << endl;

    //display separate line
    displaySeparateLine(numSpaces);

    //display contents of values[i], layout of game
    cout << "|";
    for (int i =0; i < numSpaces; i++){
        if (bShown[i] == true)
            cout << setw(5) << values[i];
        else cout << setw(5) << "";

        cout << "|";
    }
    cout << endl;

    displaySeparateLine(numSpaces);
}

//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play()
{   
    bool* bShown = new bool[numSpaces];
    for (int i = 0; i < numSpaces; i++)
        bShown[i] = false;

    display(bShown);

    int index; //index of current flip
    int first; //index for 1st flip, each round
    int numFlips = 0;
    int pairsFound = 0;

    while (pairsFound < numPairs){
        cout << "Pick a cell to flip: ";
        cin >> index;   //test index if valid or not,whether its a bShown index is true or not 
        while (index < 0 || index >= numSpaces ||bShown[index] == true){
            if(index < 0 || index >= numSpaces)
                cout << "index needs to be in range [0, "  <<numSpaces << "]."<<endl;
            else //bShown[index] == true
                cout << "The cell indexed at " << index<<" is shown."<<endl;
            cout << "Re-enter an index: ";
            cin>>index;
        }
        //the index is valid.
        //see whether first or second flip
        if (numFlips % 2 ==0){  //first flip in a round
            bShown[index] = true;
            first = index;
        } 
        else{//second flip
            if (values[first] == values[index]&& values[first] != ""){
                bShown[index] = true;
                pairsFound++;
            }
            else bShown[first] = false;
        }
        display(bShown);
        numFlips++;
    }
    cout << "Congratulations! Take " << numFlips << " steps to find all matched pairs."<<endl;

    delete[] bShown;
    bShown = nullptr;
}
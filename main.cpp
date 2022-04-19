

// this is supposed to make a game that can function like battleship
// this is only sudocode

// notice how the way this functions is very simmilar to the exercise we did last unit with
// guessing on the grid, many conceptual components were taken from that and reworked into this

//-----------------------------------------------------------------------------------------------

//includes===========
#include <iostream>
//#include <>
//#include <>
//===================
using namespace std;

//-----create dimensions of playing field-----------------------------------
const int MAX_ROWS = 10; // declare the number of rows to print
const int MAX_COLS = 10; // declare the number of collums to print

// *************Function Protoypes*******************

// Initialize array with random integers (1-100)
void InitArray(/* OUT */ int numArray[] [MAX_COLS], /* IN */ int rowsUsed, /* IN */ int colsUsed);

// Display array in a grid
void PrintArray(/* IN */ const int numArray[] [MAX_COLS], /* IN */ int rowsUsed, /* IN */ int colsUsed);

//this function tells if the integer entered is in the array or not
bool FindNumber(/* IN */ const int numArray[] [MAX_COLS], /* IN */ int numToFind,
                /* OUT */int &rowFound, /* OUT */ int &colFound);
// this function is for shots fired
bool pewpew(int r, int c)

int main(){
// variable declarations-----------------------------
 int choice;                            // the integer choice that user inputs
 int location;                          // the location of the integers on the grid
 int rowFound = 0;                      // row that int was found
 int colFound = 0;                      // colum that int was found

 bool found, found2;
 int numArray[MAX_ROWS][MAX_COLS];

 //program body----------------------------------

 // initialize array

 // have user place down battleships
            // export user's ship locations to external file for saving
                    // computer must be able to reference both of this information for each guess

 // have computer place it's own battleships
            // have a data structure for the location of computer's ships on grid

 // ask user to take a guess on the computers ships
 // vice versa

// all previous things need a loop structure

// perhaps use a struct to hold all the code for the user and the computer's game boards

//    cout << "Hello world!" << endl; this is an essential component in every program
    return 0;
}   // end of main function.



//--------functions---------------------------------------------

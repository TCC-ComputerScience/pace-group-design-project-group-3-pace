# PACE
Program Design Exercise

/*Flow:
Computer generates board
Print empty board so user can select a coordinate to guess 
Prompt user for one set of coordinates to guess
Check if coordinates contain a ship and output ‘hit’ or ‘miss’
Print board with updated guess from user 
Loop until user has guessed all correct coordinates and sunk all ships
Once all ships have been sunk, end game*/

// Structs:
struct Board {
static const int MAX_ROWS = 11; // row 0 contains letters A-J
Static const int MAX_COLS = 11; // column 0 contains numbers 1-10
int boardArray [MAX_ROWS][MAX_COLS];
int rowsUsed = MAX_ROWS;
Int colsUsed = MAX_COLS;
};


// Functions:
// Generates a board that contains 5 ship locations. Ship positions must be horizontal or vertical.
// 	Ships: Destroyer: 2 consecutive coordinates, Submarine: 3 consecutive coordinates, Cruiser: 3 consecutive coordinates
// 	Battleship: 4 consecutive coordinates, Carrier: 5 consecutive coordinates
void GenerateBoard(Board &board);

// Prints out board using characters '~' ocean, '#' ship, 'H' part of ship is hit, '.' miss
void PrintBoard(Board board);

/*I think we should have a total of two boards: one that prints the characters to display to the user before each guess and one that holds ship locations that is not displayed to the user*/

// Checks user's guess coordinates with coordinates that contain a ship and output 'hit, ship name' or 'miss'
bool CheckCoordinates(Board &board, char guessRow, int guessCol, char hitRow, int hitCol);


main (){
// Computer generates board

// do while loop until all ships are sunk
// do{
// Prompt user to guess coordinates
// Check if coordinates contain a ship 
// Print board with updated coordinates that were guessed
//	}	
// while (ships are not sunk/found);	
// output "All ships have been sunk!"
}

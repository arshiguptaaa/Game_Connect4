# Game_Connect4
Connect Four is a game in which two players, Red (R) and Yellow (Y), alternate placing colored pieces on a 7×7 board. It's crucial to note that pieces will descend to the lowest available space within the column. The objective is to be the first to align four of one's pieces in a straight line, be it horizontally, vertically, or diagonally. The player using Red (R) always takes the initial turn. The provided illustration depicts a game state where the player with Red (R) pieces has emerged victorious. 
The game logic is executed through a singular function named playMove(), responsible for executing moves like placing a piece on the game board, verifying a winner, and switching players' turns. Interaction between the controller and the game logic involves a GameState object. This object encompasses the game state, storing information like the selected column, the row where the piece lands, marks at each board location (R or Y), move validity, current player's turn, game status, etc.
Game operation is straightforward: the controller prompts a player to input a column integer on the board. If the column is valid, it updates the GameState object with the row and column coordinates, then invokes the playMove() function of the game logic, passing the GameState object (by reference). playMove() modifies the GameState object based on the player's move, such as determining a winner. Upon the function's return, the controller prints the updated GameState. This cycle continues until a win or draw.
The game controller resides in the main() function in connectfour.cpp. Its initial task is to create and initialize three game boards for a best-of-3 scenario, achieved by constructing an array of three GameState objects. Notably, when creating an object array, the default constructor is invoked for each object in the array.
After initializing the game boards, the program follows these steps for each GameState:

Prompts the player for an integer indicating the desired column on the game board to place their piece.
Verifies that the entered integer is within the range of 0–6 and that the chosen column is not already full.
Prints the selected column if it's valid; otherwise, print "Invalid column" and provide the player with another opportunity until a valid column is entered.
Determines the lowest available row for the piece to fall and set the selectedColumn and selectedRow of the GameState object to the input values.
Updates the game board at the relevant location with either R or Y.
Invokes the playMove() function.
Prints the gameBoard of the GameState.
Declares the winner if one exists, and repeats the process for another game until a player wins the best-of-3 games.

![image](https://github.com/user-attachments/assets/10a55da7-5477-4b6f-a563-6ae295b2db1f)

# N-Queens-Problem

The N Queens problem is a classic problem in computer science, mathematics, and game theory. The problem is to place N queens on an N x N chessboard so that no two queens attack each other. This means that no two queens can be placed on the same row, column, or diagonal.

There are many ways to solve the N Queens problem, but one of the most common is the backtracking algorithm. The algorithm works by recursively placing queens on the board and checking if they attack any other queens. If a queen is placed in a position where it does not attack any other queens, the algorithm moves on to the next row and tries to place another queen. If all N queens are placed on the board without attacking each other, the algorithm returns true. If it is not possible to place all N queens on the board without attacking each other, the algorithm backtracks to the previous row and tries a different position.



The given code solves the N Queens problem using backtracking. The N Queens problem is a classic problem of placing N chess queens on an N×N chessboard so that no two queens threaten each other. In this implementation, the program uses a stack to keep track of the queens already placed on the board. The backtrackpositioning() function iteratively positions queens on the chessboard until a valid solution is found or all possible placements have been tried. The givenpostionworks() function checks if a given position for a queen is safe by verifying if it is not in the same column, row or diagonal as any previously placed queen.

The program prints out all valid solutions and the total number of valid solutions found.

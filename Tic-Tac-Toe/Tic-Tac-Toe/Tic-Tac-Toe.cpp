// Tic-Tac-Toe.cpp : Defines the entry point for the console application.
// Create a tic-tac-toe program using a 2x2 matrix (2D array) for keeping track of the game. 

#include "stdafx.h"
#include <iostream>
using namespace std;

char mat[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} }; // declare and initialize 3x3 matrix that will store all the X's and O's.
char player = 'X'; // A variable that keeps track of whose move it is.

void display() // displays the current tic-tac-toe board. 
{
	system("cls"); // clears the display window. Makes it look nicer overall.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat[i][j] << " ";
		}
			
		cout << "\n";
	}
	
}

int win() // checks for a win.
{
	if (mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]) // First check if first, second, and third rows are all X's or all O's.
	{
		return 1;
	}

	else 
		if (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2])
		{
			return 1;
		}
		else 
			if (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2])
			{
				return 1;
			}
	if (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]) // Check if first, second, and third columns are all X's or all O's.
	{
		return 1;
	}

	else 
		if (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1])
		{
			return 1;
		}
		else 
			if (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2])
			{
				return 1;
			}
		
			else 
				if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) // check if both diagonals are all X's or all O's.
				{
					return 1;
				}
				else 
					if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
					{
						return 1;
					}
	return -1;
}

void input()
{
	int a; 
	cout << "Please select your move." << endl;
	cin >> a;

	switch (a)
	{
	case 1: 
		if (mat[0][0] != 'X' && mat[0][0] != 'O')
			mat[0][0] = player;
		else
		{
			cout << "Please make a valid move. \n"; // prevents the player from entering an invalid input or move.
			input(); // The same player goes again if the previous move was invalid. 
		}
		break;
	case 2:
		if (mat[0][1] != 'X' && mat[0][1] != 'O')
		mat[0][1] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 3:
		if (mat[0][2] != 'X' && mat[0][2] != 'O')
		mat[0][2] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 4:
		if (mat[1][0] != 'X' && mat[1][0] != 'O')
		mat[1][0] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 5:
		if (mat[1][1] != 'X' && mat[1][1] != 'O')
		mat[1][1] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 6:
		if (mat[1][2] != 'X' && mat[1][2] != 'O')
		mat[1][2] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 7:
		if (mat[2][0] != 'X' && mat[2][0] != 'O')
		mat[2][0] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 8: 
		if (mat[2][1] != 'X' && mat[2][1] != 'O')
		mat[2][1] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
		break;
	case 9:
		if (mat[2][2] != 'X' && mat[2][2] != 'O')
		mat[2][2] = player;
		else
		{
			cout << "Please make a valid move. \n";
			input();
		}
			
		break;
	default:
		cout << "Not a valid Entry. \n";
	}
}

void togglePlayer() // Changes turns. 
{
	if (player == 'X')
	{
		player = 'O';
	}

	else
		player = 'X';
}

int checkDraw()
{
	if (mat[0][0] != 1 && mat[0][1] != 2 && mat[0][2] != 3 && mat[1][0] != 4 && mat[1][1] != 5 && mat[1][2] != 6 && mat[2][0] != 7 && mat[2][1] != 8 && mat[2][2] != 9)
	{
		return 1;
	}

	else
		return -1;
}

int main()
{
	display();
	int result; // for storing the result if there is a win or not. 
	int draw; // for storing the result if there is a draw.

	while (1) // infinite while loop. There must be a terminating condition in the while loop.
	{
		input();
		display();
		
		result = win();

		if (result == 1)
		{
			cout << player << " wins!" << endl;
			break;
		}
	/*	draw = checkDraw(); // add a checkDraw() function here, once you have defined it. 
		if (draw == 1)
		{
			cout << "The game is a draw!" << endl;
			break;
		} */
		togglePlayer();
		
	}
	system("Pause");

    return 0;
}


#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
bool gameOver;  // Condition which is going to be used for representation of ongoing game, viceversa
int tailX[50], tailY[50]; //Array Of Tail Size
int nTail;
const int width = 20; //Arena Size 20#
const int height = 20; // Arena Size
int x, y, fruitX, fruitY, score; // Coordinates of Fruit and Player, Score
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN}; // Direction, Controls
eDirection dir;

void Settings() // Used for the overall settings such as player poisition and Fruit Spawn
{
	gameOver = false;
	dir = STOP;
	x = width / 2; // Spawn player to center 
	y = height / 2;
	fruitX = rand() % width; // Spawn fruit to random location
	fruitY = rand() % height;
	score = 0;



} 


void Visual()  //Part of Visuals, Drawing the arena with for loops
{
	system("cls");  
	for (int i = 0; i < width+2; i++) // Draw top level of ##############
	{
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0) // Draw # to the first row, coordinate 0
				cout << "#";
			if (i == y && j == x) // Draw a player head if i = y , j = x
				cout << "O";
			else if (i == fruitY && j == fruitX) // Spawn Fruit
				cout << "*";
			else
			{
				bool printtail = false; 

				for (int k = 0; k < nTail; k++)  // For lopp for drawing the tail of the snake
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						printtail = true;
					}
				}
				if(!printtail) 
				
				cout << " "; // Draw spaces if in the middle so we have the decent arena
			}
				
	

				if (j == width - 1)  // Draw # to the last coorindate, 19
					cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < width+2; i++) // Drawing the bottom row
	{
		cout << "#";
	}
	cout << endl;
	cout << "Score "<<score; //Score preview

}

void Logic() // The logic of Snake game
{

	int prevX = tailX[0]; // Remembering the first location of tail, the first o

	int prevY = tailY[0];

	int prev2X, prev2Y; // Used for storing data of previous location of tail, second

	tailX[0] = x;

	tailY[0] = y;

	for (int i = 1; i < nTail; i++) //For loop for drawing the remaining parts of tail, depending of how many fruits have been eaten

	{

		prev2X = tailX[i]; // Getting the location of Tail


		prev2Y = tailY[i]; // locatin storing

		tailX[i] = prevX;

		tailY[i] = prevY;

		prevX = prev2X;

		prevY = prev2Y;

	}

	switch (dir) // Switch used for controlls
	{
	case LEFT: // Left direction is x-- which is left to the coordinate system
		x--;
		break;
	case RIGHT:     // Right direction is x++ which is right to the coordinate system
		x++;   
		break;
	case UP:  // UP direction is y-- which is up to the coordinate system
		y--;
		break;
	case DOWN: // Down direction is y++ which is down to the coordinate system
		y++;
		break;
	default:
		break;

	}
	if (x >= width) // Logic for passing through the wall, if X is greater that width, return it to zero, so on
		x = 0;
	else if (x < 0)
		x = width - 1;
	if (y >= width)
		y = 0;
	else if (y < 0)
		y = width - 1;

	for (int i = 0; i < nTail; i++)  //Player Death logic
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;
	
	
	if (x == fruitX && y == fruitY) // Fruit Eating score incrementation and tail size incrementation logic
	{
		score++;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}
}

void Input()
{
	if (_kbhit()) //Keyboard Hit
	{
		switch (_getch()) // Get Character Hexadecimal value and convert it so it can be understood
		{
			// Standard WASD controls
		case 'a':  // If a, go left
			dir = LEFT;
			break;
		case 'd':  // If d, go right
			dir = RIGHT;
			break;
		case 'w':  // If w, go up
			dir = UP;
			break;
		case 's': // If s, go down
			dir = DOWN;
			break;
		case 'x': // If x, game over
			gameOver = true;
			break;



		}
	}

}



int main()
{
	//Channel all the implemented functions above
	Settings(); 
		while (!gameOver)
		{
			Visual();
			Input();
			Logic();
			Sleep(40);
	}
		
	return 0;

} 


//1203 Team 2
//Kaitlin White, Allison Abbott, Erik Sterdt, Luke Bowler
//12/02/2020
//Tictactoe Game

#include <stdio.h>
#define FILE_NAME "scores.txt"
#define MAXARRAY 256
#define NAMESIZE 15

int getMenu();
void displayBoard(char gameBoard[][]);
void playerNames(char player1[][], char player2[][]);
int checkWinner(char gameBoard[][]);
int checkHor(char gameBoard[][]);
int checkVer(char gameBoard[][]);
int checkDia(char gameBoard[][]);
_Bool checkTie(char gameBoard[][]);
void getMoves(char gameBoard[][], char player[][]);
void saveScores(FILE scores, player[][]);
void displayScores(FILE scores);
void sortPlayers(FILE scores, player[][]);

int main() {





	return 0;
}


int getMenu()
{
	int choice;
	_Bool loop = false;
	
	printf("***RIC TAC TOE***\n1. Play Game\n2. Show Scores\n0. EXIT\n");
	while (loop == false)
	{		
		if (choice >= 0 && choice <= 2)
		{
			loop = true;
		}
		else
		{
			printf("Invalid choice");
		}
	}
	
	return choice;
}

void displayBoard(char gameBoard[][])
{
	printf("    1  2  3  \n  ------------");
	for(int i; i <= 2; i++)
	{
		printf(%d | %c| %c| %c |   \n  ------------\n", i, gameBoard[i][1],  gameBoard[i][2],  gameBoard[i][3]); 
	}
}
void playerNames(char player1[][NAMESIZE], char player2[][NAMESIZE])
{
	for (int i = 0; i < 1; i++) {
		printf("Player 1, enter your name: ");
		scanf("%s", player1[i]);
	}
	for (int i = 0; i < 1; i++) {
		printf("Player 2, enter your name: ");
		scanf("%s", player2[i]);
	}
	printf("\n");
	for (int num = 0; num < 1; num++) {
		printf("%s, you'll be X's\n", player1[num]);
		printf("%s, you'll be O's\n", player2[num]);
	}
}

int checkWinner(char gameBoard[][])
{
	int result;

	result = checkHor(gameBoard[][]);

	if (result == 0)
	{
		result = checkVer(gameBoard[][]);
	}

	if (result == 0)
	{
		result = checkDia(gameBoard[][]);
	} 
	
	if (result == 0)
	{
		if (checkTie == true)
		{
			return 3;
		}
	}

	return result;
}

int checkHor(char gameBoard[][])
{
	int check1 = 0, check2 = 0;
	int x = 0, y = 0;
	_Bool win1 = false, win2 false;

	for (y = 0; y <= 2; x++)
	{
		check1 = 0;
		check2 = 0;

		for (x = 0; x <= 2; y++)
		{
			if (gameBoard[x][y] == 'X')
			{
				check1++;
			}
			if (gameBoard[x][y] == 'O')
			{
				check2++;
			}

			if (check1 == 3 || check2 == 3)
			{
				y = 3;
			}
		}

		if (check1 == 3)
		{
			return 1;
		}
		else if (check2 == 3)
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}

}

int checkVer(char gameBoard[][])
{
	int check1 = 0, check2 = 0;
	int x = 0, y = 0;
	_Bool win1 = false, win2 false;

	for (x = 0; x <= 2; x++)
	{
		check1 = 0;
		check2 = 0;

		for (y = 0; y <= 2; y++)
		{
			if (gameBoard[x][y] == 'X')
			{
				check1++;
			}
			if (gameBoard[x][y] == 'O')
			{
				check2++;
			}
			if (check1 == 3 || check2 == 3)
			{
				y = 3;
			}
		}

		if (check1 == 3)
		{
			return 1;
		}
		else if (check2 == 3)
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
}

int checkDia(char gameBoard[][])
{
	int check1 = 0, check2 = 0;
	int x = 0, y = 0;
	_Bool win1 = false, win2 = false;

	for (int d = 0; d <= 2; d++)
	{
		if (gameBoard[d][d] == 'X')
		{
			check1++;
			if (check1 == 3)
			{
				win1 = true;
			}
		}
		if (gameBoard[d][d] == 'O')
		{
			check2++;
			if (check2 == 3)
			{
				win2 == true;
			}
		}
	}

	if (check1 = !3 || check2 = !3)
	{
		check1 = 0;
		check2 = 0;

		if (gameBoard[0][2] == 'X')
		{
			if (gameBoard[1][1]) == 'X' || gameBoard[2][0] == 'X')
			win1 = true;
		}

		if (gameBoard[0][2] == 'O')
		{
			if (gameBoard[1][1]) == 'O' || gameBoard[2][0] == 'O')
			win2 = true;
		}
	}

	if (win1 == true)
	{
		return 1;
	}
	else if (win2 = true)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

_Bool checkTie(char gameBoard[][])
{
	int count;

	for (int x = 0; x <= 2; x++)
	{
		for (int y = 0; y <= 2; y++)
		{
			if (gameBoard[x][y] == 'X' || gameBoard[x][y] == 'Y')
			{
				check++;
			}

		}
	}

	if (check == 9)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void getMoves(char gameBoard[][], char player[][])
{
	int row, col;
	char move;
	move = player[2];
	printf("Pick a spot (row col)\n");
	scanf(%d %d", &row, &col);
	if (gameBoard[row][col] == 'X' || gameBoard[row][col] == 'O')
	{
		prinf("That spot is already taken");
	}
	else
	{
		gameBoard[row][col] = move;
	}
}

void saveScores(FILE scores, player[][])
{
	int score = checkWinner(char gameBoard[][]);
	for (int i = 0; i < 10; i++) {
		fprintf(fp, "%s %d\n", player[score + 1][]);
	}
	fclose(fp);
}

void displayScores(FILE* scores)
{
	int score;
	char name;
	//file opening can be moved
	//if else statement can be moved
	//loop stays within function
	scores = fopen(FILE_NAME, "r");
	if (scores == NULL) {
		printf("Cannot open file.");
	}
	else {
		for (int num = 0; num < 10; num++) {
			fscanf(scores, "%d %c", &score, &name);
			printf("%d %c", score, name);
		}

		fclose(scores);
	}


}

void sortPlayers(FILE* scores, player[][]);
{
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (player[i][] < player[j][]) {
				a = player[i];
				player[i] = player[j];
				player[j] = a;
			}
		}
	}

	scores = fopen(FILE_NAME, "w");

	if (scores != NULL) {
		for (i = 0; i < 10; i++) {
			fprintf(scores, "%d %c", player[i][]);
		}
	}
	else {
		printf("Cannot open file.");
	}

}

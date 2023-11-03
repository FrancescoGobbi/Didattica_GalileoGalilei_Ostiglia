// C program to print a Christmas tree
// It is recommended is try it with a desktop
// compiler like CodeBlocks.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define RefRate 40000
#define randomness 5 // high means less random

// Clear the shell
void clrscr()
{
	system("@cls||clear");
}

// Print a random character giving preference
// to *
void printRandLeaf()
{
	char leaftypes[5] = { '.', '*', '+', 'o', 'O' };
	int temp = rand() % randomness;

	// Giving preference to *
	if (temp == 1)
		printf("%c ", leaftypes[rand() % 5]);
	else
		printf("%c ", leaftypes[1]);
}

void triangle(int f, int n, int toth)
{
	int i, j, k = 2 * toth - 2;

	for (i = 0; i < f - 1; i++)
		k--;

	// number of rows
	for (i = f - 1; i < n; i++) {

		// space handler
		for (j = 0; j < k; j++)
			printf(" ");

		// decrementing k after each loop
		k = k - 1;

		// number of columns, printing stars
		for (j = 0; j <= i; j++)
			printRandLeaf();

		printf("\n");
	}
}

// Prints multiple triangles
void printTree(int h)
{
	int start = 1, stop = 0, diff = 3;
	while (stop < h + 1) {
		stop = start + diff;
		triangle(start, stop, h);
		diff++;
		start = stop - 2;
	}
}

// Prints bottom part.
void printLog(int n)
{
	int i, j, k = 2 * n - 4;

	for (i = 1; i <= 6; i++) {

		// space handler
		for (j = 0; j < k; j++)
			printf(" ");

		for (j = 1; j <= 6; j++)
			printf("#");

		printf("\n");
	}
}

// Driver code
int main()
{
	srand(time(NULL));
	int ht = 6;

	printf("\n*********MERRY CHRISTMAS*********\n\n");

	// refresh loop
	while (1) {
		clrscr();
		printTree(ht);

		printLog(ht);
		usleep(RefRate);
	}

	return 0;
}

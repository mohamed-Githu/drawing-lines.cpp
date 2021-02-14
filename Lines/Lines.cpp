#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

const int lung = 20;
const int larg = 30;
char board[lung][larg];

int main()
{
	int p1, p2, p3, p4;
	initialize();
	draw();
	cout << "\n\nEnter the first point\nx : ";
	cin >> p1;
	cout << "y : ";
	cin >> p2;
	cout << "Enter the second point\nx : ";
	cin >> p3;
	cout << "y : ";
	cin >> p4;
	motawazy(p1, p2, p3, p4);
	draw();
	initialize();
	cout << "\n";
	quadrato(p1, p2, p3, p4);
	cout << "\n";
	draw();
}

void draw()
{
	for (int x = 0; x < larg; x++)
		cout << "|" << setw(2) << x;
	cout << "\n ";
	for (int x = 0; x < larg; x++)
		cout << "___";
	cout << "\n";
	for (int x = 0; x < lung; x++)
	{
		for (int y = 0; y < larg + 1; y++)
		{
			cout << "| " << board[x][y];
			if (y == larg)
				cout << x;
		}
		cout << "\n";
	}
	for (int x = 0; x < larg; x++)
		cout << "---";
}

void initialize()
{
	for (int x = 0; x < lung; x++)
	{
		for (int y = 0; y < larg; y++)
			board[x][y] = ' ';
	}
}
#include <iostream>

extern const int lung;
extern const int larg = 30;
extern char board[][larg];

using namespace std;

static void line2(int x1, int y1, int x2, int y2)
{
	board[x1][y1] = '*';
	board[x2][y2] = '*';
	while (x1 != x2 || y1 != y2)
	{
		int x = x1, y = y1;
		if (x1 < x2)
			x = x2--;
		else if (x1 > x2)
			x = x2++;
		if (y1 > y2)
			y = y2++;
		else if (y1 < y2)
			y = y2--;
		board[x][y] = '*';
	}
}

static void line1(int x1, int y1, int x2, int y2)
{
	while (x1 != x2 || y1 != y2)
	{
		int x = x1, y = y1;
		if (x1 < x2)
			x = x1++;
		else if (x1 > x2)
			x = x1--;
		if (y1 > y2)
			y = y1--;
		else if (y1 < y2)
			y = y1++;
		board[x][y] = '*';
	}
}

void motawazy(int x1, int y1, int x2, int y2)
{
	line1(x1, y1, x2, y2);
	line2(x1, y1, x2, y2);
}
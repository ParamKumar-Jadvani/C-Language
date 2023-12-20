#include <stdio.h>
#include <conio.h>
//#include "D:\4432\C-language\Chapter-16\My_Functions.c"
#define P printf
#define S scanf
int i, j;



void array_2D_Input();


void array_2D_Input(int r, int c, int a[r][c])
{
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			P("a[%d][%d] : ",i,j);
			a[i][j] = getInt();
		}
	}
}

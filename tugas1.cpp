#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>

void main()
{
	int N;
	cin >> N;
	if(N>50)
	{
		N=N-25;

	}
	else
	{
		N=N+10;
	}

	cout << N;
   getch();
}

#include <stdio.h>

void fir(int a , int b);

void sec(int a , int b);

void thi(int a , int b);

int zero = 100;
int max = 0;
int bord[10][10];

int main(void)
{
	int x , y;
	int size;
	int i , j;
	
	for( i = 0 ; i <= 9 ; i++ )
	{
		for( j = 0 ; j <= 9 ; j++)
		{
			bord[i][j] = 0;
		}
	}
	
	while(scanf("%d,%d,%d" , &x , &y , &size) != EOF)
	{
		if(size == 1)
		{
			fir(x , y);
		}
		if(size == 2)
		{
			sec(x , y);
		}
		if(size == 3)
		{
			thi(x , y);
		}
	}
	
	printf("%d %d\n" , zero , max );
}

void fir(int a , int b)
{
	int w[] = { 0 , 1 , 0 , -1 , 0 };
	int h[] = { -1 , 0 , 1 , 0 , 0 };
	int i;
	
	for( i = 0 ; i < 5 ; i++ )
	{
		if(a + w[i] <= 9 && a + w[i] >= 0 && b + h[i] <= 9 && b + h[i] >= 0)
		{
			bord[a + w[i]][b + h[i]]++;
			zero--;
			if(max < bord[a + w[i]][b + h[i]])
			{
				max = bord[a + w[i]][b + h[i]];
			}
		}
	}
	
	return ;
}

void sec(int a , int b)
{
	int w[] = { 0 , 1 , 1 , 1 , 0 , -1 , -1 , -1 , 0 };
	int h[] = { -1 , -1 , 0 , 1 , 1 , 1 , 0 , -1 , 0 };
	int i;
	
	for( i = 0 ; i < 9 ; i++ )
	{
		if(a + w[i] <= 9 && a + w[i] >= 0 && b + h[i] <= 9 && b + h[i] >= 0)
		{
			bord[a + w[i]][b + h[i]]++;
			zero--;
			if(max < bord[a + w[i]][b + h[i]])
			{
				max = bord[a + w[i]][b + h[i]];
			}
		}
	}
	
	return ;
}

void thi(int a , int b)
{
	int w[] = { 0 , -1 , 0 , 1 , -2 , -1 , 0 , 1 , 2 , -1 , 0 , 1 , 0 };
	int h[] = { -2 , -1 , -1 , -1 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 2 };
	int i;
	
	for( i = 0 ; i < 13 ; i++ )
	{
		if(a + w[i] <= 9 && a + w[i] >= 0 && b + h[i] <= 9 && b + h[i] >= 0)
		{
			bord[a + w[i]][b + h[i]]++;
			zero--;
			if(max < bord[a + w[i]][b + h[i]])
			{
				max = bord[a + w[i]][b + h[i]];
			}
		}
	}
	
	return ;
}

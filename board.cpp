#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
 char board()
{
	char *board[8][8],*s,*a[8],*b[8],*c[8],*d[8],*e[8],*f[8],*g[8],*h[8];
	//cin >> s;
	for (int i = 0; i < 8; i++)
	{
		cout << i << " ";
    	for (int j = 0; j < 8; j++)
		{
			if(i==0 && j==0)
			{
			cout << "[ ";
			board[i][j]= "R";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==1)
			{
			cout << "[ ";
			board[i][j]= "N";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==2)
			{
			cout << "[ ";
			board[i][j]= "B";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==3)
			{
			cout << "[ ";
			board[i][j]= "Q";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==4)
			{
			cout << "[ ";
			board[i][j]= "K";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==5)
			{
			cout << "[ ";
			board[i][j]= "B";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==6)
			{
			cout << "[ ";
			board[i][j]= "N";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==0 && j==7)
			{
			cout << "[ ";
			board[i][j]= "R";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==1)
			{
			cout << "[ ";
			board[i][j]= "P";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==2)
			{
			cout << "[ ";
			board[i][j]= " ";
			cout << board[i][j];
			cout << " ]";
			}if(i==3)
			{
			cout << "[ ";
			board[i][j]= " ";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==4)
			{
			cout << "[ ";
			board[i][j]= " ";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==5)
			{
			cout << "[ ";
			board[i][j]= " ";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==6)
			{
			cout << "[ ";
			board[i][j]= "P";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==0)
			{
			cout << "[ ";
			board[i][j]= "R";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==1)
			{
			cout << "[ ";
			board[i][j]= "N";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==2)
			{
			cout << "[ ";
			board[i][j]= "B";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==3)
			{
			cout << "[ ";
			board[i][j]= "Q";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==4)
			{
			cout << "[ ";
			board[i][j]= "K";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==5)
			{
			cout << "[ ";
			board[i][j]= "B";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==6)
			{
			cout << "[ ";
			board[i][j]= "N";
			cout << board[i][j];
			cout << " ]";
			}
			if(i==7 && j==7)
			{
			cout << "[ ";
			board[i][j]= "R";
			cout << board[i][j];
			cout << " ]";
			}
		}
			cout << endl;
			cout << endl;
		}
		cout << "    a    b    c    d    e    f    g    h" << endl;
		cout << "  " ;
		for(int i=0,j=0;i<8;i++)
		{
			a[i]=board[i][j];
			cout << "  " << a[i] << "  ";
		}
}
int main()
{
	board();
	return 0;
}

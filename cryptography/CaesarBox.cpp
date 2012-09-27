//sg

#include<math.h>
#include<string.h>
#include<iostream>
#include "CaesarBox.h"
#include<curses.h>
#include<stdlib.h>

using namespace std;
CaesarBox::CaesarBox(char * message)
{
	attempts=1;
	score=10;
this->message=message;	
length=strlen(message);
/*Adjust power if not already a power of two*/
	if(length&1!=0) //length not power of 2
	{
			int newL=power2(length);
			cout<<newL<<"\n";
			char * temp=new char[length];
			strcpy(temp,message);
			//delete message;
			message=new char[newL];
			strcpy(message,temp);
			delete temp; 	
			for(int i=length;i<newL;i++)
			{
				message[i]='_';
			}
			message[newL]='\0';
			length=newL;
	}
	dimension=sqrt(length);
	matrix=new char * [dimension];	
	int ptr=0;
	for(int i=0;i<dimension;i++)
	{
		matrix[i]=new char[dimension+1];
		for(int j=0;j<dimension;j++)
		{
			matrix[i][j]=message[ptr++];
		}
		matrix[i][dimension]='\0';
	}
}
/*Finding closest power of 2 for 32 bit numbers*/
int CaesarBox::power2(int x)
{
	--x;
	x=x|(x>>1);
	x=x|(x>>2);
	x=x|(x>>4);
	x=x|(x>>8);
	x=x|(x>>16);
	++x;
	return x;
}
void CaesarBox::encrypt()
{
	
	transpose();
	
}
void CaesarBox::transpose()
{
	int temp;
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<i;j++)
		{
			temp=matrix[j][i];
			matrix[j][i]=matrix[i][j];
			matrix[i][j]=temp;
		}
	}
	
}
void CaesarBox::decrypt()
{
	transpose();
}
void CaesarBox::dumpMatrix(int x,int y)
{
	y+=3;
	move(y,x);
	
	for(int i=0;i<dimension;i++)
	{
		
	getyx(stdscr, y, x);
//	attron(A_REVERSE);
	mvprintw(y,x+i*3,matrix[i]);
	refresh();
	}
cout<<"\n\n";
}

void CaesarBox::init()
{
initscr();
int x,y;

encrypt();
getmaxyx(stdscr,y,x);
dumpMatrix(x,y);
waitForInput();
/*
getyx(stdscr, y, x);

decrypt();
dumpMatrix(x,y);*/
getch();

endwin();
}
void CaesarBox::waitForInput()
{
char mesg[]="The Code Says :  ";
char str[80];
int row,col;
initscr();
start_color();
/* Start color
*/
init_pair(1, COLOR_BLUE, COLOR_WHITE);
attron(COLOR_PAIR(1));

while((5-attempts)>=0)
{
getmaxyx(stdscr,row,col);
mvprintw(row/4,(col-strlen(mesg))/3,"%s",mesg);
getstr(str);

if(!strcmp(str,message))
{
mvprintw(LINES - 15, 0, "You got it right!  Score : %d", (score/attempts));

break;
}
else
{
	mvprintw(LINES - 12, 10, "Try Again!  Attempts left :  %d", 5-attempts++);
}
}
attroff(COLOR_PAIR(1));

}


//sg
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ncurses.h>
using namespace std;
class FigletHandler
{
	char * msg;
	char * ops;
	
	public:
	FigletHandler(char * msg,char * ops)
	{
			this->msg=msg;
			this->ops=ops;
	}
	void printBanner()
	{
		char command[1000];
		
			sprintf(command,"figlet %s %s",msg,ops);
		system(command);
		
	}
	
};
int main()
{
	

	FigletHandler f("sg","-ct");
	f.printBanner();
	cin.get();
	initscr();
	getch();
			endwin();

	return 0;
}


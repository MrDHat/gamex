//sg
#include<iostream>
#include<ncurses.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<string>

using namespace std ;


// Giving Invalid Input when " " 
// And,Or,not,XOR left

class BitOps
{
/*this class should enclose the 
 * parser and the functions 
 * 1. And ,or ,not ,xor,
 * 2. ones (x) : returns number of 1's in binary representation of x
 *  similar to ones, define functions like : 
 * zeros(x)
 * 3. firstOne(x) : returns location of first one log2(x&(-x))
 * 4. nearPower(x) : nearest power of x
 * 
 * Just implement these functions and after that, 
 * you need to provide the following functionality : 
 * 1. You need to parse what user has entered. 
 * 2. if user types "help" just dump all the commands available
 * 3. if user types exit, go to main screen ( for now ,exit the program)
 * 4. if user types a valid command , print result in the next line. 
 * eg : 
 * 		$help
 * 		$ ones : get number of ones in binary representaion
 *   ( the dollar will also be printed by your program)
 * 	
 */ 

public :

int And(int x, int y){
  return x & y;
}
 
int Or(int x, int y){
  return x | y;
}
 
int Xor(int x, int y){
  return x ^ y;
}
 
int Not(int x){
  return !x ;
}


void Exit(){
  
  clear();
  endwin();
  exit(0);
}

int ones(int x)			// FUNCTION TO CALCULATE THE NUMBER OF ONEs IN BINARY REPRESENTATION OF X
{
	int oneCount = 0 ;
	if(!x)
	{
		return -1;
	}
	
	while(x)
	{
		if(x & 1)
			oneCount++ ;
		x = x >> 1 ;
	}
	return oneCount ;
}

int zeros(int y){	//Counting the number of zeros in binary representation of y
  int zeroCount = 0;
  
   if(!y){
      return -1;
   }
  
   while(y){
    
    if(!(y & 1))
      zeroCount++;
    y >>= 1;
  }
  return zeroCount;
}


int firstOne(int x)		// FUNCTION TO CALCULATE THE POSITION OF THE FIRST 1 FROM LSB IN BINARY REPRESENTATION OF X
{
	if(!x)
	{
		return -1;
	}
	
	int r=x&-(x);
	int mask=1;
	int pos=0;
	
	while(r)
	{
		if((mask&r)==1)
		{
			return pos; 
		}
	pos++;
	r=r>>1;
	}
}

int nearPower(int x){	// Calculating nearest power of 2
  --x;
  x=x|(x>>1);
  x=x|(x>>2);
  x=x|(x>>4);
  x=x|(x>>8);
  x=x|(x>>16);
  ++x;
  return x;
}

// -1 => Invalid Input
// -2 => help
// -3 => exit

int parser(string msg){						// FUNCTION FOR PARSING THE INPUT
    size_t brack1, brack2, length_of_msg ;
    int num ;
    
    length_of_msg = msg.length();
    
    if(msg.find("ones")!=string::npos)				// CHECKING FOR ones FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      
      if(4 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return ones(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("zeros")!=string::npos)			// CHECKING FOR zeros FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return zeros(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("firstOne")!=string::npos)			// CHECKING FOR firstOne FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
   
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return firstOne(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("nearPower")!=string::npos)			// CHECKING FOR nearPower FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return nearPower(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("help")!=string::npos && length_of_msg == 4){				// need help?
      return -2;
    }
    else if(msg.find("exit")!=string::npos && length_of_msg == 4)  // Exit entered
      Exit();
    else 
      return -1 ;							// INVALID INPUT
  }
};

void initWin(int height, int width){	// Function to initialize Window
  
  initscr();
  clear();
  
  
  getmaxyx(stdscr,height, width);
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_WHITE, COLOR_BLACK);
}

int main(){
  
  BitOps obj  ;
  
  int height, width, i = 0, status ;
  char temp[20], ch ;
  
  initWin(height, width);
    
  while(1){
    
    attron(COLOR_PAIR(1)|A_BOLD);
    mvprintw(i, 0,"[gamex] $ ");
    attroff(COLOR_PAIR(1));
    getstr(temp);
    string msg(temp) ;
        
    if(msg.empty()){			// Check for Enter Key
	i++ ;
	if(i == LINES + 1|| i == LINES - 1 || i == LINES + 2 || i == LINES - 2){
	i = 0;
	refresh();
	clear(); 
	}
	continue ;
   }  
    else{
	status = obj.parser(msg) ;
      if(status!=-1){
	if(status == -2){				// Help Detected
	  mvprintw(++i, 0, "ones(x): Prints the number of ones in binary representation of x") ;
	  mvprintw(++i, 0, "zeros(x): Prints the number of zeroes in binary representation of x") ;
	  mvprintw(++i, 0, "nearPower(x) : prints the nearest power of 2 closest to x") ;
	  mvprintw(++i, 0, "firstOne(x):  Prints the mask of number x (Location of first one from LSB)") ;
	}
	else 
	  mvprintw(++i, 0, "%d", status) ;
      }
      else
	mvprintw(++i, 0, "Invalid Input!") ;  
    }
    ++i;
   if(i == LINES + 1|| i == LINES - 1 || i == LINES + 2 || i == LINES - 2){
      i = 0;
      refresh();
      clear(); 
   }
  }  
  refresh();
  getch();
  clear();

  endwin();
  
  return 0;
  
  
}
